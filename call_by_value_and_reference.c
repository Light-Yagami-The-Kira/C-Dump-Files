#include <stdio.h>

int change(int* ptra) {
    *ptra = *ptra + 10;
    return 0;
}


int main(int argc, char const *argv[])
{
    int a = 34;
    change(&a);
    printf("%d", a);
    return 0;
}
