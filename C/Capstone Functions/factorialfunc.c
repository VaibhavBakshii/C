#include <stdio.h>

int factorial ()
{
    int fact = 1;
    int num;

    printf("Enter the number");
    scanf("%i", &num);

    while (num > 1)
    {
        fact = fact * num;
        num--;
        printf(fact);
    }

    return 0;

}
