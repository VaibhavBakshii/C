

#include <stdio.h>

int main ()
{
    int values[10];
    int i;
    int k; //can be workd with i, just for clarity

    values[0] = 197;
    values[2] = 100;
    values[5] = 350;
    values[3] = values[0] + values[5];
    values[9] = values[5] / 10;
    ++values[2]; //
   
    
    for ( i = 0; i < 10; ++i ) {
      printf ("values[%i] = %i\n", i, values[i]);

    }

    //printing elements of array
    for (k = 0; k < 10; ++k) {
    printf ("%i,", values[k]);

    }

return 0;

    

    
}

/*Output
values[0] = 197
values[1] = 0
values[2] = 101
values[3] = 547
values[4] = 1
values[5] = 350
values[6] = 43
values[7] = 0
values[8] = 11604928
values[9] = 35
*/
//Different values are printed which haven't been assigned 

/*The variable index assumes the values 0 through 9 as the last valid
subscript of an array is always one less than the number of elements (due to that
zeroth element). Because you never assigned values to five of the elements in
the array—elements 1, 4, and 6 through 8—the values that are displayed for
them are meaningless. You will probably see different values than what are
displayed here. For this reason, no assumption should ever be made as to the
value of an uninitialized variable or array element*/