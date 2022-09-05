#include <stdio.h>
#include <stdbool.h>

// Modified progrram to generate prime numbers

int main (void)
{
    int p, i, Primes[50], primeIndex = 2;
    bool isPrime;

    Primes[0] = 2;
    Primes[1] = 3;

    for ( p = 5; p <= 50; p = p + 2) {
        isPrime = true;

        for ( i = 1; isPrime && p / Primes[i] >= Primes[i]; ++i)
             if (p % Primes[i] == 0 )
                 isPrime - false;
        if ( isPrime == true ) {
            Primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0; i < primeIndex; ++i )
         printf ("%i ", Primes[i]);
    printf ("\n");
    
    return 0;
}


//2 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 