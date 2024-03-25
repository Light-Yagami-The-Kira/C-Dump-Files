#include <stdio.h>
struct StudentDataRecord
{
    int a;
};
typedef struct StudentDataRecord SDR;
typedef unsigned long ul;
int main(int argc, char const *argv[])
{
    // typedef <previous_name> <alias_name>;
    
    SDR a1;
    a1.a = 23;
    printf("%d", a1.a);

    return 0;
}
