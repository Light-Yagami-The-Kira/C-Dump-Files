#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    for (int i=0; i<10; i++)
    {
        printf("%d\n", rand()); // FROM 0 TO RAND_MAX DEPENDING ON ARCHITECTURE
    }

    printf("-------------------------\n%d\n", RAND_MAX);
    printf("-------------------------\n");

    for (int i=0; i<10; i++)
    {
        printf("%d\n", rand()%3);
    }

    return 0;
}
