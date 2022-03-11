#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _bulk {
	int weight;
	int height;
	int rank;
} bulk;

int main(void)
{
	int N;
	bulk humans[50] = { 0, };
	for (int i = 0; i < 50; i++)
	{
		humans[i].rank = 1;
	}

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &humans[i].weight, &humans[i].height);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)  continue;
			else
			{
				if (humans[j].weight > humans[i].weight &&
					humans[j].height > humans[i].height)
				{
					humans[i].rank++;
				}
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d ", humans[i].rank);
	}
	printf("\n");

	return 0;
}