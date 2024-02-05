#include <stdio.h>

int main() {
    // Declare variables to store input and result
    int num1, num2, sum;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the result

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
