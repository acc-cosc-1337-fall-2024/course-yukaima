//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    if( 90 <= grade && grade <= 100 )
    {
        return "A";
    }
    else if ( 80 <= grade )
    {
        return "B";
    }
    else if ( 70 <= grade )
    {
        return "C";
    }
    else if ( 60 <= grade )
    {
        return "D";
    }
    else if ( 00 <= grade )
    {
        return "F";
    }
    else
    {
        return "not found";
    }
    
}
string get_letter_grade_using_switch(int grade)
{
    switch ( grade / 10 )
    {
    case 10:
    case 9:
        return "A";
        break;
    case 8:
        return "B";
        break;
    case 7:
        return "C";
        break;
    case 6:
        return "D";
        break;
    default:
    return "F";
        break;
    }





}

