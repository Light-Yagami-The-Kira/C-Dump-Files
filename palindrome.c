#include <stdio.h>
#include <math.h>

int countDigits(int number)
{
    int n = 0;
    int d = 1;
    while (1)
    {
        if (number / d != 0)
        {
            ++n;
            d = d * 10;
        }
        else
        {
            return n;
        }
    }
    return 0;
}

int numberReverser(int number)
{
    int new_number = 0;
    int digits = countDigits(number);

    // printf("%d\n", digits);

    for (int i = 0; i < digits; i++)
    {
        new_number = new_number*10 + number % 10;
        number /= 10;

        // printf("%d\n", new_number);
    
    }

    return new_number;
}

int isPalindrome(int number)
{
    return number == numberReverser(number);
}

int main(int argc, char const *argv[])
{
    int a = 12325;
    int b = 121;
    // printf("%d\n", countDigits(a));
    // printf("%d\n", numberReverser(a));

    printf("%d\n", isPalindrome(a));
    printf("%d\n", isPalindrome(b));

    return 0;
}
