#include <stdio.h>

void changevalue(int *a)
{
    *a = 10;
}
int main(int argc, char const *argv[])
{
    int a = 32, b = 12;
    printf("the value of a now is %d\n", a);
    changevalue(&a);
    printf("the value of a after changes is %d\n", a);

    return 0;
}
