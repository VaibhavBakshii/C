//modOperator

#include <stdio.h>
int main()
{
    int a = 25, b = 5, c = 10, d = 7;

    printf("a = %i, b = %i, c = %i and d = %i\n", a, b, c, d);

    printf ("a %% b = %i\n", a % b);
    printf ("a %% c = %i\n", a % c);
    printf ("a %% d = %i\n", a % d);
    printf ("a / d * d + a %% d = %i\n", a / d * d + a % d);

    return 0;
}

/*a = 25, b = 5, c = 10 and d = 7
a % b = 0
a % c = 5
a % d = 4
a / d * d + a % d = 25*/

//pred *=/=% over addition andf subtraction 
