#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num[2] = { 0, };
	char buffer[4] = { 0, };
	scanf("%d %d", &num[0], &num[1]);

	for (int i = 0; i < 2; i++)
	{	
		num[i] = num[i] % 10 * 100 + num[i] / 10 % 10 * 10 + num[i] / 100;
	}

	if (num[0] > num[1])
		printf("%d\n", num[0]);
	else
		printf("%d\n", num[1]);

	return 0;
}