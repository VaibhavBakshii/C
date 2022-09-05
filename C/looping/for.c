/* Program to calculate the 50th triangular number
Introduction of the for statement*/

#include <stdio.h>

int main ()
{
    int n, triangularNumber;

    triangularNumber = 0;

    for ( n = 1; n <= 10; n = n + 1)

    {
        triangularNumber = triangularNumber + n;
        printf ("The 200th triangular number is %i\n",triangularNumber);
    }

return 0;

}

/*for ( init_expression; loop_condition; loop_expression )
program statement (or statements)*/


/*TThe 200th triangular number is 1
The 200th triangular number is 3
The 200th triangular number is 6
The 200th triangular number is 10
The 200th triangular number is 15
The 200th triangular number is 21
The 200th triangular number is 28
The 200th triangular number is 36
The 200th triangular number is 45
The 200th triangular number is 55
*/