#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void parser (char * string)
{
    bool tag = false;
    char new_string[strlen(string)+1];
    int new_string_index = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            tag = true;
        }
        else if (string[i] == '>')
        {
            tag = false;
        }


        if (tag == false && string[i] != '>')
        {
            new_string[new_string_index] = string[i];
            new_string_index ++;
        }

    }
    new_string[new_string_index] = '\0';
    
    // STRIP SPACES

    while (new_string[0] == ' ')
    {
        for (int i = 0; i < strlen(new_string); i++)
        {
            new_string[i] = new_string[i+1];
        }
    }

    while (new_string[strlen(new_string) - 1] == ' ')
    {
        new_string[strlen(new_string) - 1] = '\0';
    }

    strcpy(string, new_string);
}
int main(int argc, char const *argv[])
{
    char string[] = "<h1>   Hello World   </h1>" ;
    parser(string);
    printf("The parsed string is ~~%s~~\n", string);   
    return 0;
}
