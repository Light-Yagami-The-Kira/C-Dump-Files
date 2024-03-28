#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    float b = 45.4;
    void *ptr;
    ptr = &a;
    printf("The value at a is %d\n", *((int*)ptr));
    ptr = &b;
    printf("The value at b is %f\n", *((float*)ptr));
    return 0;
}
