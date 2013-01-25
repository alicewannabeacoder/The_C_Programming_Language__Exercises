#include <stdio.h>

/* Exeercise 1-6: Verify that the expression getchar() != EOF is 0 or 1. */
int main(void)
{

    if ((getchar() != EOF) == 0)   /* if not ending the file (typing EOF) is false */
        printf("EOF = 0\n");
    else if ((getchar() != EOF) == 1)   /* if not ending the file (inputing EOF) is true and it's value == 1 */
        printf("EOF = 1\n");
    else
        printf("NONE.\n");

    return 0;
}
