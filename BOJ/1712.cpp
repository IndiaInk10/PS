#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int A = 0, B = 0, C = 0, n = 1;

	scanf("%d %d %d", &A, &B, &C);
		
	// 방정식을 풀어서 해결하면 된다.
	if (C <= B)
		n = -1;
	else
		n = A / (C - B) + 1;

	printf("%d\n", n);

	return 0;
}