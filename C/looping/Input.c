//Taking input 

#include <stdio.h>
int main(void)
{
    int n, number, triangularNumber;

    printf ("What triangle number do you require?");
    scanf ("%i", &number);
    triangularNumber = 0;

    for ( n = 1; n <= number; n = n + 1 )
        triangularNumber += n;
        printf ("The traiangle Number %i is %i\n", number, triangularNumber);

    return 0;


    

}

/*What triangle number do you require?10
The traiangle Number 10 is 55*/