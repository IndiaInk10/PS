#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	int M;

	char input[50][51] = { 0, };
	char fixedInput[8][8] = { 0, };

	int limitN;
	int limitM;

	int bCnt = 0;
	int wCnt = 0;
	int result[1849] = { 0, };
	int index = 0;
	int min;

	scanf("%d %d", &N, &M);

	limitN = N - 8 + 1;
	limitM = M - 8 + 1;

	for (int i = 0; i < N; i++)
	{
		scanf("%s", input[i]);
	}

	for (int i = 0; i < limitN; i++)
	{
		for (int j = 0; j < limitM; j++)
		{
			bCnt = 0;
			wCnt = 0;

			for (int k = 0; k < 2; k++)
			{
				for (int l = i; l < i + 8; l++)
				{
					for (int m = j; m < j + 8; m++)
					{
						if (l == i && m == j)
						{
							if (k == 0)
							{
								if (input[l][m] != 'W')
								{
									wCnt++;
									fixedInput[l - i][m - j] = 'W';
								}
								else  fixedInput[l - i][m - j] = input[l][m];
							}
							else if (k == 1)
							{
								if (input[l][m] != 'B')
								{
									bCnt++;
									fixedInput[l - i][m - j] = 'B';
								}
								else  fixedInput[l - i][m - j] = input[l][m];
							}
						}
						else
						{
							if (m == j)
							{
								if (input[l][m] == fixedInput[l - i - 1][m - j])
								{
									if (fixedInput[0][0] == 'W')
									{
										fixedInput[l - i][m - j] = input[l][m] == 'W' ? 'B' : 'W';
										wCnt++;
									}
									else
									{
										fixedInput[l - i][m - j] = input[l][m] == 'W' ? 'B' : 'W';
										bCnt++;
									}
								}
								else  fixedInput[l - i][m - j] = input[l][m];
							}
							else
							{
								if (input[l][m] == fixedInput[l - i][m - j - 1])
								{
									if (fixedInput[0][0] == 'W')
									{
										fixedInput[l - i][m - j] = input[l][m] == 'W' ? 'B' : 'W';
										wCnt++;
									}
									else
									{
										fixedInput[l - i][m - j] = input[l][m] == 'W' ? 'B' : 'W';
										bCnt++;
									}
								}
								else  fixedInput[l - i][m - j] = input[l][m];
							}
						}
					}
				}
			}

			if (wCnt <= bCnt)  result[index++] = wCnt;
			else  result[index++] = bCnt;
		}
	}

	min = result[0];
	for (int i = 1; i < limitN * limitM; i++)
	{
		if (min > result[i])  min = result[i];
	}

	printf("%d\n", min);

	return 0;
}