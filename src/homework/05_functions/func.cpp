//add include statements
#include "func.h"
//add function code here

double get_gc_content( const string& dna )
{
    int gc_count = 0;
    int i ;
    for ( i = 1; i <= dna.length(); i++)
    {
        char character = dna[i];
        if (character == 'G' || character == 'C') 
        {
            gc_count++;
        }
    }

    double gc_percent;
    gc_percent =  (gc_count) / dna.length();

    return gc_percent;
}


string get_reverse_string( string dna )
{
    string reversed_dna ;
    int i = dna.length() ;
    for ( i ; i >= 0; i--) 
    {
        reversed_dna = reversed_dna + dna[i];
    }

    return reversed_dna;
}


string get_dna_complement( string dna )
{
    string complement = dna;
    int i ;
    for ( i = 1; i <= dna.length(); i++)
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
