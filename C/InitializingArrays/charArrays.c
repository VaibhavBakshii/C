#include <stdio.h>

int main (void)
{
    char word[] = { 'H', 'e', 'l', 'l', 'o', '!'};
    int i;

    for ( i = 0; i < 6; ++i )
         printf ("%c", word[i]);

    printf("\n");

    return 0;
}

/*PS C:\Users\user\OneDrive\Desktop\C\InitializingArrays> cd "c:\Users\user\OneDrive\Desktop\C\InitializingArrays\" ; if ($?) { gcc charArrays.c -o charArrays } ; if ($?) { .\charArrays }
Hello!
PS C:\Users\user\OneDrive\Desktop\C\InitializingArrays>

There is no mention of the number of elements in the
array. The C language allows you to define an array without specifying the
number of elements. If this is done, the size of the array is determined
automatically based on the number of initialization elements.*/
