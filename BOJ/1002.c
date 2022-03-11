#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct _coord {
	int x;
	int y;
}coord;

int main(void)
{
	int T, r1, r2, d, add, sub;
	coord one, two;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d %d %d", &one.x, &one.y, &r1, &two.x, &two.y, &r2);

		d = (int)(pow((one.x - two.x), 2) + pow((one.y - two.y), 2));

		if (r2 > r1)
		{
			int tmp = r1;
			r1 = r2;
			r2 = tmp;
		}

		add = r1 + r2;
		add = pow(add, 2);
		sub = r1 - r2;
		sub = pow(sub, 2);

		// https://mathbang.net/101

		if (sub < d && d < add)
		{
			printf("2\n");
		}
		else if (add == d || (sub == d && d != 0))
		{
			printf("1\n");
		}
		else if (add < d || d < sub)
		{
			printf("0\n");
		}
		else if (d == 0)
		{
			if (r1 == r2)
				printf("-1\n");
			else
				printf("0\n");
		}
	}

	return 0;
}