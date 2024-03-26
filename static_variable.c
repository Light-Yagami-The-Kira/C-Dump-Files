#include <stdio.h>

int Number = 23;

void func1 (int* a)
{
    ++(*a);
    static int b = 0;
    b = b - 1;
    printf("Static:%d\n", b);
}

int main(int argc, char const *argv[])
{
    
    func1(&Number);
    printf("%d\n", Number);
    func1(&Number);
    printf("%d\n", Number);
    func1(&Number);
    printf("%d\n", Number);
    return 0;
}
