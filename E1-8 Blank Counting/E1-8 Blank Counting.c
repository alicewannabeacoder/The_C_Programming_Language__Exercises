#include <stdio.h>

/* Count blanks, tabs, and newlines. */
int main(void)
{
    int nb = 0;
    int c  = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n' || c == ' ' || c == '\t')
            nb++;
    printf("There are %d blanks.\n", nb);
    return 0;
}
