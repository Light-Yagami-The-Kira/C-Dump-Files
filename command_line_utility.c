#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Argument: %s\n", argv[i]);
    }
    
    return 0;
}
