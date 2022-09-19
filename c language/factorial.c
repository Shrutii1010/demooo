#include <stdio.h>
void fact(int a)
{
    int i, f = 1;
    for (i = 1; i <= a; ++i)
    {
        f = f * i;
    }
    printf("the factorial of %d is %d\n", a, f);
}
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number \n");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Invalid Number\n");
    }
    else
    {
        fact(number);
    }
}
