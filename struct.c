#include <stdio.h>
#include <string.h>
struct Employee
{
    int ID;
    int Salary;
    char Name[50];
} emp1, emp2;

int main(int argc, char const *argv[])
{
    struct Employee em3;
    emp1.ID = 123;
    emp1.Salary = 40000;
    strcpy(emp1.Name, "Hello");
    // puts(emp1.Name);

    return 0;
}
