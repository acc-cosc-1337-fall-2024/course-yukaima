//add include statements
#include "func.h"
//add function code here

double get_gc_content( const string& dna )
{
    int gc_count = 0;
    int i = 0 ;
    while ( i < dna.length() )
    {
        char character = dna[i];
        if (character == 'G' || character == 'C') 
        {
            gc_count = gc_count + 1;
        }
        i = i+1;
    }

    
    return (gc_count / dna.length());
}


string get_reverse_string( string dna )
{
    
    int i = dna.length() - 1  ;
    string reversed_dna;
    while ( i > 0 ) 
    {
        reversed_dna = reversed_dna + dna[i];
        i = i - 1;
    }

    return reversed_dna;
}


string get_dna_complement( string dna )
{
    string complement = dna;
    int i ;
    for ( i = 0; i < dna.length() - 1 ; ++i)
    {
        char character = complement[i];
        switch (character) 
        {
            case 'A':
                character = 'T';
                break;
            case 'T':
                character = 'A';
                break;
            case 'C':
                character = 'G';
                break;
            case 'G':
                character = 'C';
                break;
        }
        complement[i] = character;
    }
    return complement;
}
