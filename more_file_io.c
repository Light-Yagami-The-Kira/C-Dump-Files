#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *file_ptr = NULL;

    // file_ptr = fopen("test.txt", "r");
    // char c = fgetc(file_ptr);
    // printf("The Character I read was %c\n", c);

    // char str[45];
    // fgets(str,10, file_ptr);
    // printf("Character 10: %s\n", str);

    // file_ptr = fopen("test.txt", "w");
    // fputc('o', file_ptr);
    // fputc('o', file_ptr);
    // fputc('d', file_ptr);
    // fputs("Hello world\nHow are you bitch!", file_ptr);
    
    file_ptr = fopen("test.txt", "r+");
    fputs("JEEE\n", file_ptr);
    
    // file_ptr = fopen("test.txt", "w+");
    // fputs("JEE_ADVANCED\n", file_ptr);

    // file_ptr = fopen("test.txt", "a");
    // fputs("KRISHANU\n", file_ptr);
    
    fclose(file_ptr);
    return 0;
}
