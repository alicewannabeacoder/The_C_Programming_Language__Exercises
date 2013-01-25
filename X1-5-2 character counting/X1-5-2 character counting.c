#include <stdio.h>

/* Count the number of characters you enter */
int main(void)
{
    long nc = 0;

    while (getchar() != EOF)
        ++nc;

//    for (nc = 0; getchar() != EOF; ++nc)
//        ;

    printf("The number of character is %ld.\n", nc);
    return 0;
}
