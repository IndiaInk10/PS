#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _stack {
	int ptr[10000];
	int top;
}stack;

void push(stack* stk, int num)
{
	stk->top++;
	stk->ptr[stk->top] = num;
}
void pop(stack* stk)
{
	if (stk->top == -1) printf("-1\n");
	else
	{
		printf("%d\n", stk->ptr[stk->top--]);
	}
}
void size(stack* stk)
{
	printf("%d\n", stk->top + 1);
}
void empty(stack* stk)
{
	if (stk->top == -1) printf("1\n");
	else printf("0\n");
}
void top(stack* stk)
{
	if (stk->top == -1) printf("-1\n");
	else printf("%d\n", stk->ptr[stk->top]);
}

void doCommand(stack* stk, char* command)
{
	char* temp = strtok(command, " ");

	if (!strcmp(temp, "push"))
	{
		push(stk, atoi(strtok(NULL, " ")));
	}
	else if (!strcmp(temp, "pop"))
	{
		pop(stk);
	}
	else if (!strcmp(temp, "size"))
	{
		size(stk);
	}
	else if (!strcmp(temp, "empty"))
	{
		empty(stk);
	}
	else if (!strcmp(temp, "top"))
	{
		top(stk);
	}
}

int main(void)
{
	int N;
	char inputString[13] = { 0, };
	stack stk = { 0, };
	stk.top = -1;
	
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++)
	{
		scanf("%[^\n]s", inputString);
		getchar();

		doCommand(&stk, inputString);
	}

	return 0;
}