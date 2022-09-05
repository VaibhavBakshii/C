//Absolute Number

#include <stdio.h>

int main ()
{
    int number;

    printf ("Type in your number");
    scanf ("%i", &number);

    if ( number < 0 )
       number = -number;

    printf ("The absolute number is %i\n", number);

    return 0;
}

/*Type in your number-5
The absolute number is 5*/

