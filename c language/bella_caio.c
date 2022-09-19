/*Chef is planning a heist in the reserve bank of Chefland. They are planning to hijack the bank for D days and print the money. The initial rate of printing the currency is P dollars per day and they increase the production by Q dollars after every interval of d days. For example, after d days the rate is P+Q dollars per day, and after 2d days the rate is P+2Q dollars per day, and so on. Output the amount of money they will be able to print in the given period.*/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int T;
    long long D, d, p, q;
    scanf("%d", &T);

    for (int i = 0; i <= T; ++i)
    {
        long long ans;
        //s long long n = D / d;
        scanf("%lld %lld %lld %lld ", &D, &d, &p, &q);
        if (D % d == 0)
        {
            ans = (D / d) * p * d + d * (q * ((D / d) * ((D / d) - 1)) / 2);
            printf("%lld\n", ans);
        }
        else
        {
            ans = (D / d) * p * d + d * (q * ((D / d) * ((D / d) - 1)) / 2) + (D % d) * (p + (D / d) * q);
            printf("%lld\n", ans);
        }
    }

    return 0;
}
