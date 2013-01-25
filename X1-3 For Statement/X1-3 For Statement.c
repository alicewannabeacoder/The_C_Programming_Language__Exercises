#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP  20

/* use For loop & Symbolic Constants to print F-C table */
int main(void)
{
    int Fah;
//    int
    for (Fah = LOWER; Fah <= UPPER; Fah += STEP)
        printf("%3d\t%3.1f\n", Fah, (5.0/9.0)*(Fah-32));
    return 0;
}
