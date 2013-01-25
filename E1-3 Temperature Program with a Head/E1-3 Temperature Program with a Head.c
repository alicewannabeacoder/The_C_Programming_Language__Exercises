#include <stdio.h>

/* Exercise 1-3: Modify the temperature conversion program to print a heading
    above the table. */
int main(void)
{
    int low, high, step, FahTemp;
    float CelTemp;

    FahTemp = low = 0;  /* Lower limit of Fahrenheit temperature */
    high = 300;         /* Upper limit of Fahrenheit temperature */
    step = 20;          /* Step size */

    printf("Temperatures Convert: From Fahrenheit to Celsius\n");  /* Table's head */
    while (FahTemp <= high){
        CelTemp = 5.0 * (FahTemp - 32.0) / 9.0;    /* Convert Equation */
        printf("%3d\t%3.1f\n", FahTemp, CelTemp);
        FahTemp = FahTemp + step;
    }
    return 0;
}
