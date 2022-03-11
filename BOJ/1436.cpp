#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	int cnt = 0;

	int num = 665;
	int tmp;

	scanf("%d", &N);

	// 문자열로 판별하는 것보다 10으로 나눠가면서 1000으로 나눴을때 666이 되는 경우로
	// 찾는 것이 더 효율적인 브루트 포스 방법이다

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