#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T = 0, H = 0, W = 0, N = 0, Y = 0, XX = 0;

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		
		Y = N % H;
		if (!Y)
			Y = H;

		printf("%d", Y);
		XX = N / H;
		if (N % H != 0)
			XX++;

		if (XX / 10 == 0)
			printf("0");
		printf("%d\n", XX);
	}

	return 0;
}