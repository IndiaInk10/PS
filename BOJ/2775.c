#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T = 0, k = 0, n = 0;
	int apt[15][14] = { 0, };

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if(i == 0)
				apt[i][j] = j + 1;
			else if(j == 0)
				apt[i][j] = 1;
			else
				// 자신의 앞과 자신의 아래를 더하면 자기자신이 나온다.
				apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
		}
	}

	scanf("%d", &T);

	for (int l = 0; l < T; l++)
	{
		scanf("%d", &k);
		scanf("%d", &n);

		printf("%d\n", apt[k][n - 1]);
	}

	return 0;
}