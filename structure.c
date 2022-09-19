#include <stdio.h>
#include <string.h>
// (.) is called as structure member operator
//to access the member of the structure we use this operator in between "structure name" and "memberr name"

struct employee
{
    int id;
    float salary;
    char name[];
};

int main(int argc, char const *argv[])
{

    struct employee e1, e2;
    e1.id = 89;
    e2.id = 02;
    e1.salary = 33232;
    e2.salary = 454657;
    strcpy(e1.name, "shruti ");
    printf("salary of employee e1 is %d\n", e1.salary);
    printf("employee name is : %s\n", e1.name);

    return 0;
}
