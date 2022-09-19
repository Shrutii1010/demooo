
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		int a[n];
		int b[n];
		int c[n];
		int temposb = -1;
		int temposc = -1;
		int posb[n];
		int posc[n];
		int tempb = INT_MAX;
		int tempc = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] != 0)
			{
				if (a[i] <= tempb)
				{
					tempb = a[i];
					l[i] = tempb;
					temposb = i;
					posl[i] = temposb;
				}
				else
				{
					l[i] = tempb;
					posl[i] = temposb;
				}
			}
			else
			{
				l[i] = tempb;
				posl[i] = temposb;
			}
		}

		for (int i = n - 1; i >= 0; i--)
		{
			if (a[i] != 0)
			{
				if (a[i] >= tempc)
				{
					tempc = a[i];
					r[i] = tempc;
					temposc = i;
					posr[i] = temposc;
				}
				else
				{
					r[i] = tempc;
					posr[i] = temposc;
				}
			}
			else
			{
				r[i] = tempc;
				posr[i] = temposc;
			}
		}

		for (int i = 0; i < m; i++)
		{
			int j;
			scanf("%d", &j);
			j = j - 1;
			if (j == 0)
			{
				printf("%d ", 0);
				continue;
			}
			if (a[j] != 0)
			{
				printf("%d ", 0);
			}
			else
			{
				int left = b[j];
				int right = c[j];
				if (left == 1 && right == 2)
				{
					printf("%d ", min(j - posb[j], posr[j] - j));
				}
				else if (left == 1 && right != 2)
				{
					printf("%d ", (j - posl[j]));
				}
				else if (right == 2 && left != 1)
				{
					printf("%d ", (posr[j] - j));
				}
				else

					printf("%d ", -1);
			}
		}
		printf("\n");
	}
	return 0;
}