#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10002

void myStrrev(char* str)
{
	char temp = 0;
	int strLen = strlen(str);

	for (int i = 0; i < strLen / 2; i++)
	{
		temp = str[i];
		str[i] = str[strLen - 1 - i];
		str[strLen - 1 - i] = temp;
	}
}

int main(void)
{
	char A[MAX_LENGTH] = { 0, };
	char B[MAX_LENGTH] = { 0, };

	char result[MAX_LENGTH + 1] = { 0, };

	int strLen = 0, sum = 0;

	scanf("%s %s", A, B);

	myStrrev(A);
	myStrrev(B);

	strLen = strlen(A) > strlen(B) ? strlen(A) : strlen(B);

	for (int i = 0; i < strLen; i++)
	{
		if (i > strlen(A) - 1 || i > strlen(B) - 1)
		{
			if (result[i] == '1')  sum = 1;
			else sum = 0;

			sum += strlen(A) > strlen(B) ? (A[i] - 48) : (B[i] - 48);
			if (sum >= 10)
			{
				sum %= 10;
				result[i + 1] = '1';
			}

			result[i] = sum + 48;
			continue;
		}

		if(result[i] == '1')  sum = (A[i] - 48) + (B[i] - 48) + 1;
		else  sum = (A[i] - 48) + (B[i] - 48);

		if (sum >= 10)
		{
			sum %= 10;
			result[i + 1] = '1';
		}
		
		result[i] = sum + 48;
	}

	myStrrev(result);
	printf("%s\n", result);

	return 0;
}