#include <stdio.h>
int main(int argc, char const *argv[])
{
    int * ptr;
    *ptr = 34;
    printf("%d\n", *ptr);
    return 0;
}
