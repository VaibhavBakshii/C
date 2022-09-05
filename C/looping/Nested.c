#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, counter;

    for ( counter = 1; counter <= 5; ++counter )
    {
        printf ("What triangular number do you want?");
        scanf ("%i", &number);
        triangularNumber = 0;

        for ( n = 1; n <= number; ++n )
        triangularNumber += n ;

        printf ("triangular Number is %i is %i\n\n", number, triangularNumber);
        
    }

    return 0;

}

/*
What triangular number do you want?10
triangular Number is 10 is 55

What triangular number do you want?15
triangular Number is 15 is 120

What triangular number do you want?100
triangular Number is 100 is 5050

What triangular number do you want?40
triangular Number is 40 is 820

What triangular number do you want?40
triangular Number is 40 is 820

PS C:\Users\user\OneDrive\Desktop\C\Looping>
*/