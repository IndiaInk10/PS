#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0;
	char input[100][101] = { 0, };
	int group = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", input[i]);
	}

	for (int i = 0; i < N; i++)
	{
		int index = 0;
		int bGroup = 1;
		int ascII[26] = { 0, };

		while (input[i][index] != '\0')
		{
			if (index == 0)
			{
				ascII[input[i][index] - 97] = 1;
			}
			else
			{
				if (input[i][index] != input[i][index - 1])
				{
					if (ascII[input[i][index] - 97] == 1)
					{
						bGroup = 0;
						break;
					}
					// ascII[input[i][index] - 97] == 0
					else
					{
						ascII[input[i][index] - 97] = 1;
					}
				}
			}

			index++;
		}

		if (bGroup)
			group++;
	}

	printf("%d\n", group);

	return 0;
}