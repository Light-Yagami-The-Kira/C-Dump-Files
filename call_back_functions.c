#include <stdio.h>
#include <stdlib.h>

int sum (int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr) (int, int))
{
    printf("Hello\n");
    printf("The sum of a and b is: %d\n", fptr(5,7));
}

void greetGMandExecute(int (*fptr) (int, int))
{
    printf("Good Morning\n");
    printf("The sum of a and b is: %d\n", fptr(5,7));
}


int main(int argc, char const *argv[])
{
    int (*ptr) (int, int);
    ptr = sum;
    greetHelloAndExecute(ptr);

    return 0;
}
