#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int X = 0, an = 0, n = 0, pre = 0, a = 0, b = 0;

	scanf("%d", &X);
	while (X > an + n)
	{
		an += n;
		pre = an;
		n++;
	}

	X -= pre;

	// 짝수(좌하양)
	if (n % 2 == 0)
	{
		a = 1;
		b = n;
		
		X--;

		while (X > 0)
		{
			a++;
			b--;

			X--;
		}
	}
	// 홀수(우상향)
	else
	{
		a = n;
		b = 1;

		X--;

		while (X > 0)
		{
			a--;
			b++;

			X--;
		}
	}

	printf("%d/%d", a, b);

	return 0;
}