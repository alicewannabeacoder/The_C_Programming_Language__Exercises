#include <stdio.h>
#define MAXCLEN 255

/* Exercise 1-14 Write a program to print a histogram of the frequencies of different characters in its input */
int main(void)
{
    int c, i, j;
    int nchar[MAXCLEN];

    j = 0;
    for (i = 0; i < MAXCLEN; ++i)
        nchar[i] = 0;

    while ((c = getchar()) != EOF){
        nchar[c]++;
    }

    for (i = 0; i < MAXCLEN; ++i){
        if (nchar[i] == 0)
            continue;
        printf("%c | ", i);
        for (j = 1; j <= nchar[i]; j++)
            printf("-");
        printf("\t%d\n", nchar[i]);
    }

    return 0;
}
