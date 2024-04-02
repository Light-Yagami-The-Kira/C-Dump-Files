#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE * file_ptr = NULL;
    // file_ptr = fopen("test.txt", "r");
    char string [100] = "Hello World";
    // fscanf(file_ptr, "%s", string);
    // printf("%s", string);

    file_ptr = fopen("test.txt", "w");
    fprintf(file_ptr, "%s", string);

    fclose(file_ptr);
    return 0;
}
