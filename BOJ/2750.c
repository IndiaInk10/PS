#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, nList[1000000] = { 0, }, temp = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &nList[i]);
	}

	for (int j = 0; j < N; j++)
	{
		for (int k = 0; k < N - 1; k++)
		{
			if (nList[k] > nList[k + 1])
			{
				temp = nList[k + 1];
				nList[k + 1] = nList[k];
				nList[k] = temp;
			}
		}
	}

	for (int l = 0; l < N; l++)
	{
		printf("%d\n", nList[l]);
	}

	return 0;
}