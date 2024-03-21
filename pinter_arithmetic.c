#include <stdio.h>
int main(int argc, char const *argv[])
{
    long double a = 34;
    long double* ptra = &a;
    printf("%d\n", sizeof(a));
    printf("%d\n", ptra);
    // printf("%d", ptra+1);
    ptra++;
    printf("%d", ptra);
    return 0;
}
