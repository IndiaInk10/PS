#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int decimal(int num)
{
	if (num < 2)
		return 0;
	else if (num < 4)
		return 1;

	int SQRT = (int)floorf(sqrt((float)num));

	for (int i = 2; i <= SQRT; i++)
	{

		if (num % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main(void)
{
	int T, n;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &n);
		// This algorithm N keep changed, so We use MAX(10000) value for loop
		for (int i = n/2; i >= 2; i--)
		{
			if (decimal(i) && decimal(n - i))
			{
				printf("%d %d\n", i, n - i);
				break;
			}
		}
	}

	return 0;
}