// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int t, i, n, sum = 0;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);

        while (n != 0)
        {
            n = n / 10;
            sum = sum + (n % 10);
        }
        printf("%d\n", sum);
    }

    return 0;
}