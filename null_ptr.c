#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 345;
    int *p = NULL;
    // printf("%d\n", *p); CRASH 
    p = &x;

    printf("%d\n", *p); 


    return 0;
}
