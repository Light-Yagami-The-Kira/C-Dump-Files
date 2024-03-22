#include <stdio.h>

int average(int array[]){
    for (int i = 0; i < 3; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    
    return 0;
}
int average2(int *array){
    for (int i = 0; i < 3; i++)
    {
        printf("The value at %d is %d\n", i, *(array+i));
    }
    
    return 0;
}

int main(int argc, char const *argv[])
{
    int a[3] = {1,2,3};
    average(a);
    average2(a);
    return 0;
}


