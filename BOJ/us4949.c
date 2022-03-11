#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101

typedef struct _stack {
    char store[MAX_LENGTH];
    int top;
} stack;

int bEmpty(stack* stk)
{
    if (stk->top == -1)  return 1;
    else return 0;
}

void push(stack* stk, char c)
{
    stk->store[++(stk->top)] = c;
}

char pop(stack* stk)
{
    if (bEmpty(stk))  return -1;
    else  return stk->store[stk->top--];
}

int main(void)
{
    char input[MAX_LENGTH] = { 0, };
    int bBalance;
    stack stk = { 0, };
    int sStartTop;
    int bStartTop;

    while(1) {
        bBalance = 1;
        sStartTop = -1;
        bStartTop = -1;
        for (unsigned int i = 0; i < MAX_LENGTH; i++)
        {
            stk.store[i] = 0;
        }
        stk.top = -1;

        scanf("%[^\n]s", input);
        getchar();

        if (input[0] == '.')  break;

        for (unsigned int i = 0; i < strlen(input); i++)
        {
            if (input[i] == '(' || input[i] == '[')
            {
                push(&stk, input[i]);
                switch (input[i])
                {
                case ')':
                    if (sStartTop == -1)  sStartTop = stk.top;
                    break;
                case ']':
                    if(bStartTop == -1)  bStartTop = stk.top;
                    break;
                }
            }
            else if (input[i] == ')' || input[i] == ']')
            {
				switch (input[i])
				{
				case ')':
					if (pop(&stk) != '(')
					{
						bBalance = 0;
					}
                    else
                    {
                        if (stk.top + 1 == sStartTop && sStartTop < bStartTop)
                        {
                            sStartTop = -1;
                            bBalance = 1;
                        }
                        else
                        {
                            bBalance = 0;
                        }
                    }
					break;
				case ']':
					if (pop(&stk) != '[')
					{
						bBalance = 0;
					}
                    else
                    {
                        if (stk.top + 1 == bStartTop && bStartTop < sStartTop)
                        {
                            bStartTop = -1;
                            bBalance = 1;
                        }
                        else
                        {
                            bBalance = 0;
                        }
                    }
					break;
				}
            }

        }

        if (bBalance)  printf("yes\n");
        else printf("no\n");

    }
    
    return 0;
}