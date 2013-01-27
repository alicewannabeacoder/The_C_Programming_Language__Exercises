#include <stdio.h>

/* count figits, white space, others */
int main()
{
    int c, i, nwhite, nothing;
    int ndigit[10];

    nwhite = nothing = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9')
            ndigit[c-'0']++;
        else if (c == ' ' || c == '\t' || c == '\n')
            nwhite++;
        else
            nothing++;
    }

    printf("Digit number is: ");
    for (i = 0; i < 10; i++)
        printf("%d: %d ", i, ndigit[i]);

    printf("\nWhite spaces' number is: %d\nOthers' number is: %d\n", nwhite, nothing);
    return 0;
}
