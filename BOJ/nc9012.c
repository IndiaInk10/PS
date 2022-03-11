#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _stack {
    char ptr[51];
    int top;
}stack;

void push(stack* stk, char c)
{
    stk->top++;
    stk->ptr[stk->top] = c;
}
char pop(stack* stk)
{
    if (stk->top == -1) return -1;
    else
    {
        return stk->ptr[stk->top--];
    }
}

int main(void)
{
    int N, bNo = 0;
    char checkChar = 0;
    char inputString[51] = { 0, };
    stack stk = { 0, };
    stk.top = -1;

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++)
    {
        stk.top = -1;
        bNo = 0;
        scanf("%s", inputString);
        getchar();

        for (int j = 0; j < strlen(inputString); j++)
        {
            if (j == strlen(inputString) - 1 && stk.top > 0
                || j == strlen(inputString) - 1 && inputString[j] == '(')
            {
                printf("NO\n");
                bNo = 1;
                break;
            }

            if (inputString[j] == '(')
            {
                push(&stk, inputString[j]);
            }
            else
            {
                checkChar = pop(&stk);
                if (checkChar == -1)
                {
                    printf("NO\n");
                    bNo = 1;
                    break;
                }
                else  continue;
            }
        }
        
        if (!bNo) printf("YES\n");
    }

    return 0;
}