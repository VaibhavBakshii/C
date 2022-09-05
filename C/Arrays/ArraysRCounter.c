#include <stdio.h>

int main (void)
{
    int ratingCounters[11], i, response;

    for ( i = 1; i <= 10; ++i )
         ratingCounters[i] = 0;
    
    printf ("Enter the responses\n");

    for ( i = 1; i <= 20; ++i ) 
    {
         scanf ("%i", &response);

         if ( response < 1 || response > 10 )
             printf ("Bad response: %i\n", response);
         else
             ++ratingCounters[response];
            
    }

    printf ("\n\nRating Number of Responses\n");
    printf ("------ -------------------\n");

    for ( i = 1; i <= 10; ++i )
         printf ("%4i%14i\n", i, ratingCounters[i]);

    return 0;




}

/*Enter the responses
6
5
8
3
9
6
5
7
15
Bad response: 15
5
5
1
7
4
10
5
5
6
8
9


Rating Number of Responses
------ -------------------
   1             1
   2             0
   3             1
   4             1
   5             6
   6             3
   7             2
   8             2
   9             2
  10             1
PS C:\Users\user\OneDrive\Desktop\C\Arrays>
*/

/*

Enter the responses
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5


Rating Number of Responses
------ -------------------
   1             0
   2             0
   3             0
   4             0
   5            20
   6             0
   7             0
   8             0
   9             0
  10             0
PS C:\Users\user\OneDrive\Desktop\C\Arrays>

*/