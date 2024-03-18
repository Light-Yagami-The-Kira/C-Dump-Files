#include <stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    int a = 34;
    int b = 4 ;
    float c = 5.7;

    printf("%3d\n", a/b);
    printf("%-10.3fHello", c/b);

    // Constants in C

    const float some_constant_value = 34;

    // some_constant_value = 45;    ---] They are wrong statements, 
    // PI = 30;                     ---] since constants can't be changed.


    return 0;
}
