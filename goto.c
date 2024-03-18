#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter 0 or 1: ");
    scanf("%d", &a);
    if (a == 0){
        goto code0;
    }
    else if (a == 1){
        goto code1;
    }
    code0:
        printf("Code0");
    code1:
        printf("Code1");
    return 0;
}
