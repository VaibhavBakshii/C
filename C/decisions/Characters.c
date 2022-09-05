/* Program to categorize a single character that is entered
at the terminal */

#include <stdio.h>

int main (void)
{
    char c;

    printf ("Enter the character to be catrgorised:");
    scanf ("%c", &c);

    if ( (c >= "a" && c <= "z" ) || (c >= "A" && c <= "B") )
       printf ("charter is an alphabet,\n ");
    else if ( ( c >= '0' && c <= "9"))
       printf ("Its a digit");
    else 
       printf ("Its a special character");

    return 0;
      
}

