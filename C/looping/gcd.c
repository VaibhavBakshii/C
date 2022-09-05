/* Program to find the greatest common divisor
of two nonnegative integer values */

#include <stdio.h>

int main (void)
{
    int u, v, temp;

    printf ("please type two nonnegative integers");
    scanf ("%i%i", &u, &v);

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;

    }

    printf ("Their greatest common divisor is %i\n", u);

    return 0;
}

/*
please tyoe two nonnegative integers10
15
Their greatest common divisor is 5
*/