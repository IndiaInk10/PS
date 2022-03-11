#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main(void)
{
	int N, a = 0, b = 0, bag = 0;

	scanf("%d", &N);

	a = N / 5;

	if (N % 5 >= 3)
	{					 
		b = (N % 5) / 3;
		if ((N % 5) % 3)
		{
			b = N / 3;
			if (N % 3)
				bag = -1;
			else
				bag = b;
		}
		else			 
			bag = a + b; 
	}
	else if (N % 5 == 0)
	{
		bag = a;
	}
	else
	{
		a--;
		b = (N - 5 * a) / 3;

		if ((N - 5 * a) % 3)
		{
			b = N / 3;
			if (N % 3)
				bag = -1;
			else
				bag = b;
		}
		else
			bag = a + b;
	}

	printf("%d\n", bag);
	printf("a=%d b=%d\n", a, b);

	/*while (1)
	{
		scanf("%d", &N);

		a = N / 5;

		if (N % 5 >= 3)
		{
			b = (N % 5) / 3;
			if ((N % 5) % 3)
			{
				b = N / 3;
				if (N % 3)
					bag = -1;
				else
					bag = b;
			}
			else
				bag = a + b;
		}
		else if (N % 5 == 0)
		{
			bag = a;
		}
		else
		{
			a--;
			b = (N - 5 * a) / 3;

			if ((N - 5 * a) % 3)
			{
				b = N / 3;
				if (N % 3)
					bag = -1;
				else
					bag = b;
			}
			else
				bag = a + b;
		}

		printf("%d\n", bag);
		printf("a=%d b=%d\n", a, b);
	}*/

	return 0;
}