#include <stdio.h>
int sum();
int main()
{
    int result;
    result = sum();
    printf("%d", result);
}
int sum()
{
    int T = 0, i;
    for (i = 0; i <= T; i++)
    {
        int a, b, xa, xb, Xa, Xb;
        scanf("%d", &T);
        scanf("%d %d %d %d", &xa, &xb, &Xa, &Xb);
        a = Xa / xa;
        b = Xb / xb;
        return a + b;
    }
}
