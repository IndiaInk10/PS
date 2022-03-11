#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, nMinus2 = 0, nMinus1 = 1, result = 0;

	scanf("%d", &n);

	if (n == 0)
		result = nMinus2;
	else if (n == 1)
		result = nMinus1;
	else
	{
		for (int i = 1; i < n; i++)
		{
			result = nMinus2 + nMinus1;
			nMinus2 = nMinus1;
			nMinus1 = result;
		}
	}

	printf("%d\n", result);

	return 0;
}