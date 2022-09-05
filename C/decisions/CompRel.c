// Program to determine if a year is a leap year

#include <stdio.h>

int main()
{
    int year, rem_4, rem_100, rem_400;

    printf ("Enter the year to be tested:\n");
    scanf ("%i", &year);

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0 )
         printf ("It's a leap year.\n");
    else
         printf ("Nope its not a leap year");

    return 0;


}

/*1994
Nope its not a leap year*/