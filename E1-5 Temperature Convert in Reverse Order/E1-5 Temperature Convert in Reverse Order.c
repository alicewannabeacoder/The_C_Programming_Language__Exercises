#include <stdio.h>

/* Exercise 1-5 Modify the temperature conversion program to print
    the table in reverse order, that is, from 300 degrees to 0. */
int main(void)
{
    int fah_temp;
    for (fah_temp = 300; fah_temp >= 0; fah_temp = fah_temp - 20)
        printf("%3d\t%3.1f\n", fah_temp, (5.0 / 9.0) * (fah_temp - 32));

    return 0;
}
