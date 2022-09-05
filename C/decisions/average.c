#include <stdio.h>

int main()
{
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    int failiureCount = 0;
    float average;

    printf ("How many grades will you be entering?");
    scanf ("%i", &numberOfGrades);

    for ( i = 1; i <= numberOfGrades; ++i) {
        printf ("Enter grade #%i:", i);
        scanf ("%i", &grade);

        gradeTotal = gradeTotal + grade;

        if (grade < 65)
           ++failiureCount;




    }

    average = (float) gradeTotal / numberOfGrades;

    printf ("\nGrade average = %.2f\n", average); //2 defines the number of decimals
    printf ("Number of failiures = %i\n", failiureCount); // number of failiure counts

    return 0;
}

/*
How many grades will you be entering?3
Enter grade #1:80
Enter grade #2:90
Enter grade #3:50

Grade average = 73.33
Number of failiures = 1*/
