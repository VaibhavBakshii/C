//Generating table of triangular Numbers

#include <Stdio.h>
int main ()
{
    int n, triangularNumber;
    triangularNumber = 0;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf ("n   sum from 1 to n\n");
    printf ("--   --------------\n");
    for ( n = 1; n <= 10; ++n ) //increment operator
    {
        triangularNumber += n;
        printf ("%2i         %i\n", n, triangularNumber);

    }
    
    return 0;
}

/*
n   sum from 1 to n
--   --------------
1         1
2         3
3         6
4         10
5         15
6         21
7         28
8         36
9         45
10         55
*/