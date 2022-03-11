#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _coord {
	int x;
	int y;
} coord;

int main(void)
{
	int N;
	coord nList[100000] = { 0, }, temp = { 0, };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &nList[i].x, &nList[i].y);
	}

	for (int j = 0; j < N; j++)
	{
		for (int k = 0; k < N - 1; k++)
		{
			if (nList[k].x > nList[k + 1].x)
			{
				temp = nList[k + 1];
				nList[k + 1] = nList[k];
				nList[k] = temp;
			}
			else if (nList[k].x == nList[k + 1].x)
			{
				if (nList[k].y > nList[k + 1].y)
				{
					temp = nList[k + 1];
					nList[k + 1] = nList[k];
					nList[k] = temp;
				}
			}
		}
	}

	for (int l = 0; l < N; l++)
	{
		printf("%d %d\n", nList[l].x, nList[l].y);
	}

	return 0;
}