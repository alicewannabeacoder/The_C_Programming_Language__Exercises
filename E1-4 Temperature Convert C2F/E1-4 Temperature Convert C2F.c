#include <stdio.h>

/* Exercise 1-4: Write a program to print the corresponding Celsius to
    Fahrenheit table. */
int main(void)
{
    int lower, upper, step;
    float cel_temp, fah_temp;

    lower = 0;
    upper = 300;
    step = 20;

    cel_temp = lower;
    while (cel_temp <= upper){
        fah_temp = (9.0 / 5.0) * cel_temp +32;
        printf("%3.0f\t%3.1f\n", cel_temp, fah_temp);
        cel_temp = cel_temp + step;
    }
    return 0;
}
