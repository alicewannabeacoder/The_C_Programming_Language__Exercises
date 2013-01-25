#include <stdio.h>

/*---This is a program to learn how the data type convertion works in C.---*/
main()
{
    int left;
    float right;
    right = 3.5;
    left = 2;
    if (left <= right)
        printf("Assign left to right, then left = %d\n", left);
}
