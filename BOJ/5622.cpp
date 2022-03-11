#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char input[16] = { 0, };
	int index = 0, count = 0;

	scanf(" %s", input);

	while (input[index] != '\0')
	{
		switch (input[index++])
		{
			// 2
		case 'A':
		case 'B':
		case 'C':
			count += 3;
			break;
			// 3
		case 'D':
		case 'E':
		case 'F':
			count += 4;
			break;
			// 4
		case 'G':
		case 'H':
		case 'I':
			count += 5;
			break;
			// 5
		case 'J':
		case 'K':
		case 'L':
			count += 6;
			break;
			// 6
		case 'M':
		case 'N':
		case 'O':
			count += 7;
			break;
			// 7
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			count += 8;
			break;
			// 8
		case 'T':
		case 'U':
		case 'V':
			count += 9;
			break;
			// 9
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			count += 10;
			break;
		}
	}

	printf("%d\n", count);

	return 0;
}