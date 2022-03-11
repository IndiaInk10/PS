#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	int cnt = 0;

	int num = 665;
	int tmp;

	scanf("%d", &N);

	while (1)
	{
		num++;
		tmp = num;

		while (tmp != 0)
		{
			if (tmp % 1000 == 666)
			{
				cnt++;
				break;
			}

			tmp /= 10;
		}

		if (cnt == N)  break;
	}

	printf("%d\n", num);

	return 0;
}