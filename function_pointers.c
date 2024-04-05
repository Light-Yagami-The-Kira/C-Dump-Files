#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    // printf("The sum of 1 and 2 is %d\n", sum(1,2));

    int (*ptr) (int, int);
    ptr = &sum;
    int d = (*ptr)(4,6);
    printf("Value of int d as function pointer's return value: %d", d);

    return 0;
}
