

#include <stdio.h>

int main(void)
{
    int withdraw;
    float bal, rem_bal;
    scanf("%d %f", &withdraw, &bal);

    if (withdraw % 5 == 0 && bal > withdraw + 0.5)
    {
        rem_bal = bal - withdraw;
        printf("%0.2f", rem_bal - 0.5);
    }
    else
    {
        printf("%0.2f", bal);
    }
    return 0;
}
