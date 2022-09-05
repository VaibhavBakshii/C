/* Program to calculate the 50th triangular number
Introduction of the for statement*/

#include <stdio.h>

int main ()
{
    int n, triangularNumber;

    triangularNumber = 0;

    for ( n = 1; n <= 10; n = n + 1)
        triangularNumber = triangularNumber + n;
        printf ("The 200th triangular number is %i\n",triangularNumber);
    

return 0;

}

//The 200th triangular number is 55