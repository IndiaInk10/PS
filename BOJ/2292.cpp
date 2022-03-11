#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N = 0, a = 2, n = 1;
	scanf("%d", &N);

	while (N >= a + 6 * (n - 1))
	{
		a += 6 * (n - 1);
		n++;
	}

	printf("%d\n", n);
}