#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, result = 0;

	scanf("%d", &N);
	result = N;
	if (!N)
		result = 1;
	else
	{
		for (int i = 1; i < N; i++)
		{
			result *= i;
		}
	}
	
	printf("%d\n", result);
	return 0;
}