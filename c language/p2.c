/*You're given an integer N. Write a program to calculate the sum of all the digits of N.*/
#include <stdio.h>
int main()
{
    int T, N, sum = 0;
    scanf("%d", &T);
    scanf("%d", &N);
    while (N != 0)
    {
        sum = sum + (N % 10);
        N = N / 10;
    }
    printf("The sum of the numbers:%d\n", sum);
    return 0;
}
