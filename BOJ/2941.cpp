#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char input[101] = { 0, };
	int count = 0, index = 0;

	scanf("%s", input);

	// c= c- dz= d- lj nj s= z=
	while (input[index] != '\0')
	{
		switch (input[index])
		{
		case 'c':
			if (input[index + 1] == '-' || input[index + 1] == '=')
			{
				count++;
				index += 2;
				continue;
			}
			else
			{
				count++;
				index++;
				continue;
			}
			break;
		case 'd':
			if (input[index + 1] == 'z' && input[index + 2] == '=')
			{
				count++;
				index += 3;
				continue;
			}
			else if (input[index + 1] == '-')
			{
				count++;
				index += 2;
				continue;
			}
			else
			{
				count++;
				index++;
				continue;
			}
			break;
		case 'l':
			if (input[index + 1] == 'j')
			{
				count++;
				index += 2;
				continue;
			}
			else
			{
				count++;
				index++;
				continue;
			}
			break;
		case 'n':
			if (input[index + 1] == 'j')
			{
				count++;
				index += 2;
				continue;
			}
			else
			{
				count++;
				index++;
				continue;
			}
			break;
		case 's':
		case 'z':
			if (input[index + 1] == '=')
			{
				count++;
				index += 2;
				continue;
			}
			else
			{
				count++;
				index++;
				continue;
			}
			break;
		default:
			count++;
			index++;
			break;
		}
	}

	printf("%d\n", count);

	return 0;
}