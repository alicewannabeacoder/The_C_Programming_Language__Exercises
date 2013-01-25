#include <stdio.h>

/* Count the number of lines */
int main(void)
{
    int nl = 0;
    int c;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            nl++;
    printf("The number of lines are %d.\n", nl);
    return 0;
}
