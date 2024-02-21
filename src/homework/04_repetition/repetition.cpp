//add include statements
#include "repetition.h"

//add function(s) code here
int factorial(int num) 
{
    int result = 1;
    int i = 1;
    while (i <= num)
    {
        result = result * i ;
        i = i + 1;
    }
    return result;
}

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            int transfer = num1;
            num1 = num2;
            num2 = transfer;
        }
        else
        {
            num1 = num1 - num2;
        }
        
        
    }
    return num1;
    
}