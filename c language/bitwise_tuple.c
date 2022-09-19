#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int T;
    long N, M;
    scanf("%d", &T);

    for (int i = 0; i <= T; ++i)
    {
        int ans;
        scanf("%d %d", &N, &M);

        int arr[] = new int[1000002] arr[1] = 2;
        for (int i = 0; i < 1000002; i++)
        {
            arr[i] = (2 * a[i - 1] % 1000000007)
        }

        int x, y;
        x = arr[n] - 1;
        y = M;

        int temp = 1;
        while (y > 0)
        {
            if (y % 2 == 1)
            {
                temp = temp * x % 1000000007;
                y = y / 2;
                printf("%d\n", temp);
            }
        }
    }

    return 0;
}