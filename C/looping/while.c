//Program to introduce the while statement 

#include <stdio.h>

int main (void)
{
    int count = 1;

    while ( count <= 5 ) {
        printf ("%i\n", count);
        ++count;
    }

    return 0;
}

/*
1
2
3
4
5


/*
init_expression;
while ( loop_condition ) {
program statement (or statements)
loop_expression;
*/