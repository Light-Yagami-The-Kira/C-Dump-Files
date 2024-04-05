#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a;
    int *i;
    printf("Start....");
    scanf("%d",&a);
    while (1)
    {
	    printf("Hello\n");
        i = malloc(10000000 * sizeof(int));
    }
    return 0;
}
