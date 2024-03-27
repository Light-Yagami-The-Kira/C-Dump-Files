#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // MALLOC USAGE
    // int * ptr;
    // ptr = (int *) malloc(3 * sizeof(int));
    // printf("%d\n", sizeof(ptr));

    // for (int i=0; i<4; i++)
    // {
    //     printf("Enter the value at index %d: \n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i=0; i<3; i++)
    // {
    //     printf("The value at index %d is %d.\n",i ,ptr[i]);
    // }


    // int* ptr2;
    // ptr2 = (int*) calloc(2, sizeof(int));
    // // ptr2[0] = 23;
    // // ptr2[1] = 2233;
    // printf("%d\n", *ptr2);
    // ++ptr2;
    // printf("%d\n", *ptr2);

    int* ptr3 = (int*) malloc(2*sizeof(int));
    printf("%d\n", ptr3[0]);
    printf("%d\n", &ptr3[0]);
    printf("%d\n", ptr3[1]);
    printf("%d\n", &ptr3[1]);

    ptr3 = (int*) realloc(ptr3, 3*sizeof(int));

    free(ptr3);

    return 0;
}
