#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr = (int *) malloc(7* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 344;
    ptr[2] = 34234;
    printf("%d\n", &ptr[0]);
    printf("%d\n", ptr[0]);
    free(ptr);
    printf("%d\n", &ptr[0]);
    printf("%d\n", ptr[0]);
    return 0;
}
