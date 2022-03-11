#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T;

	int x;
	int y;

	int distance;

	int k[3] = { 0, 1, 0 };

	int cnt = 2;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &x, &y);
		distance = y - x - 1 - 1;
		cnt = 2;

		while (distance != 0)
		{
			k[2] = k[1] + 1;
			k[0] = k[1] - 1;

			for (int j = 2; j >= 0; j--)
			{
				if (distance - k[j] >= 0)
				{
					if (distance - k[j] == 0)
					{
						if (k[j] <= 2 && k[j] >= 1)
						{
							distance -= k[j];
							k[1] = k[j];
							cnt++;
							break;
						}
					}
					else
					{
						if (distance - k[j] > 2)
						{
							distance -= k[j];
							k[1] = k[j];
							cnt++;
							break;
						}
					}
				}
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}