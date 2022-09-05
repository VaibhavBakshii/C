#include <stdio.h>

int main (void)
{
    int array_values[10] = { 0, 1, 4, 9, 16};
    int i;

    for ( i = 5; i < 10; ++i) //squaring elements
         array_values[i] = i; 

    for ( i = 0; i < 10; ++i ) //To print the array
         printf ("array_values[%i] = %i\n", i, array_values[i]);

    return 0;

         
}

/*
array_values[0] = 0
array_values[1] = 1
array_values[2] = 4
array_values[3] = 9
array_values[4] = 16
array_values[5] = 5
array_values[6] = 6
array_values[7] = 7
array_values[8] = 8
array_values[9] = 9
*/