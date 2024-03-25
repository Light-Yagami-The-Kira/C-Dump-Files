#include <stdio.h>
union MyUnion
{
    float marks;
    int id;
}a,b;
int main(int argc, char const *argv[])
{
    MyUnion c;
    a.marks = 34.4;
    b.int = 10;
    return 0;
}
