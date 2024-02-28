//add include statements
#include "func.h"
//add function code here

double get_gc_content( const string& dna )
{
    double gc_count = 0;
    int i = 0 ;
    while ( i < dna.length() )
    {
        char character = dna[i];
        if (character == 'G' || character == 'C') //count "GC"
        {
            gc_count = gc_count + 1;
        }
        i = i+1;
    }
    return gc_count / dna.length();//give percent
}


string get_reverse_string( string dna )
{
    
    int i = dna.length() - 1  ;
    string reversed_dna;
    while ( i >= 0 ) 
    {
        reversed_dna = reversed_dna + dna[i];//reverse
        i = i - 1;
    }

    return reversed_dna;
}


string get_dna_complement(string dna)
{
    string complement = get_reverse_string( dna ); //reverse string
    int i = 0 ;
    while ( i < dna.length() )
    {
        char character = complement[i];
        switch (character) //change the character
        {
            case 'A':
                complement[i] = 'T';
                break;
            case 'T':
                complement[i] = 'A';
                break;
            case 'C':
                complement[i] = 'G';
                break;
            case 'G':
                complement[i] = 'C';
                break;
        }

        i = i+1;
    }
    return complement;
}