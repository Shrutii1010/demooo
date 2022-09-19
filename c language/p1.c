/*Chefland has 2 different types of coconut, type A and type B. Type A contains only xa milliliters of coconut water and type B contains only xb grams of coconut pulp. Chef's nutritionist has advised him to consume Xa milliliters of coconut water and Xb grams of coconut pulp every week in the summer. Find the total number of coconuts (type A + type B) that Chef should buy each week to keep himself active in the hot weather.*/

#include <stdio.h>

int main()
{
    int a, b, xa, xb, Xa, Xb, c, i, T;
    scanf("%d", &T);

    for (i = 0; i < T; ++i)
    {
        scanf("%d %d %d %d", &xa, &xb, &Xa, &Xb);
        a = Xa / xa;
        b = Xb / xb;
        c = a + b;
        printf("%d\n", c);
    }

    return 0;
}
