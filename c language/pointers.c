#include <stdio.h>
int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("the swiped numbers are %d %d\n", x, y);
}
int main(void)
{
    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &a, &b);

    swap(a, b);

    return 0;
}