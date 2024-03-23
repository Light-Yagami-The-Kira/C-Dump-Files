#include <stdio.h>
#include <string.h>

int main() {
    char text[12] = "Hello"; // Make sure there is enough space to hold both "Hello" and "World" plus the null terminator
    char text2[] = "World";

    strcat(text, text2); // Concatenate text2 onto text

    printf("Concatenated string: %s\n", text); // Print the concatenated string

    printf("\nText length: %zu\n", strlen(text)); // Print the length of the concatenated string

	printf("%d", strcmp(text, text2));

    return 0;
}
