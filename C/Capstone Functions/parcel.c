#include <stdio.h>
#include <stdlib.h>

#define SML_WGHT 2.00
#define MED_WGHT 4.00

#define SML_BASE_RATE 3.00
#define LRG_BASE_RATE 4.5
#define MED_RATE_PER_KG 0.75
#define LRG_RATE_PER_KG 0.95

double calcCost ( double weight ) //Function
{
    double cost;

    if ( weight <= SML_WGHT )
     cost = SML_BASE_RATE;
    else if ( weight <= MED_WGHT )
     cost = SML_BASE_RATE + MED_RATE_PER_KG * ( weight - SML_WGHT );
    else
     cost = LRG_BASE_RATE + LRG_RATE_PER_KG * ( weight - MED_WGHT );

    return cost;
}


int main (void) //Function added to the output 
{
    double weightKgs;
    double cost;

    printf ("Please enter a weight in Kilograms");
    scanf ("%lf", &weightKgs);
    cost = calcCost( weightKgs );

    printf( "Cost of shipping $%.2f\n", cost );

    
    return 0;

}

