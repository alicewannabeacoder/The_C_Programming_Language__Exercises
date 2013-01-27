#include <stdio.h>
#define WORD  1
#define SPACE 0

/* Exercise 1-13 Write a program to print a histogram of the lengths of words in its input. It is easy
    to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

    ---HORIZONTAL--- */
int main(void)
{
    int c, i, nl, state;
    int nlength[1000];

    c = 0;
    for (i = 0; i < 1000; ++i)   // initiate all staff to 0.
        nlength[i] = 0;
    i = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n')
            state = 0;
        else if (state == 0){   // First character of every new word. Just like the program Word Counting.
            state = 1;
            ++i;
            ++nlength[i];
        }
        else
            ++nlength[i];
    }

    for (i = 0; i < 1000; ++i){
        if (nlength[i] == 0)   // Stop the printing if the spaces of the array left were not been filled,
            break;             // in case that too many empty values were printed out as garbage.
        printf("Word %4d |", i);  // Shape the table.
        for (nl = 0; nl < nlength[i]; nl++)   // Print the bars.
            printf("-");   // Each "-" represents one.
        printf("\t%d\n", nlength[i]);   // Add the number of the words' lengths to make it prettier.
    }

    return 0;
}
