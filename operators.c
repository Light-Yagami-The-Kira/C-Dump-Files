#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 12;
    int b = 34;
    float c = 10.1;

    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);

    printf("a + c = %f\n", a+c);
    printf("a * c = %f\n", a*c);
    printf("a - c = %f\n", a-c);
    printf("a / c = %f\n", a/c);

    return 0;
}
