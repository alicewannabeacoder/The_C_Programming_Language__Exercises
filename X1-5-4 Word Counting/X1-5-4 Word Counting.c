#include <stdio.h>

/* Count the number of the words that was input. */
int main(void)
{
    int nw = 0;
    int nl = 0;
    int c;
    while ((c = getchar()) != EOF){
        if (c == '\n' || c == ' ' || c == '\t')
            nl = 0;
        else
            nl ++;
        if (nl == 1)
            nw++;
    }
    printf("The number of the words is: %d.\n", nw);
    return 0;
}

/* ---The Answer from the book---

#define IN  1
#define OUT 0

//Count lines, words, and characters in input.
int main(void)
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n')
            ++nl;
        // Because if-elseif-else goes from up to down, so if the upper is executed, the following
        // statements have no need to be checked. In this case, is the input is a space which means
        // the if statement is executed, the else if statement is not executed. Therefore, if the
        // state == OUT, it only means that the input now is the first character of a new word.
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d", nl, nw, nc);
    return 0;
}
*/
