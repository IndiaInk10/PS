#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

typedef struct _node {
	int num;
	_node* next;
} node;

typedef struct _queue {
	int size;
	node* front;
	node* back;
} deque;

void push(deque* _que, int _num)
{
	if (_que->size == 0)
	{
		node* newNode = (node*)malloc(sizeof(node));
		newNode->next = NULL;
		newNode->num = _num;

		_que->front = newNode;
		_que->back = newNode;
		_que->size++;
	}
	else
	{
		node* newNode = (node*)malloc(sizeof(node));
		newNode->next = NULL;
		newNode->num = _num;

		_que->back->next = newNode;
		_que->back = newNode;
		_que->size++;
	}
}
void pop(deque* _que)
{
	if (_que->size == 0)  printf("-1\n");
	else
	{
		node* temp = _que->front;
		printf("%d\n", _que->front->num);
		_que->front = _que->front->next;
		free(temp);
		_que->size--;
	}
}
void size(deque* _que)
{
	printf("%d\n", _que->size);
}
void empty(deque* _que)
{
	if (_que->size == 0)  printf("1\n");
	else  printf("0\n");
}
void front(deque* _que)
{
	if (_que->size == 0)  printf("-1\n");
	else
	{
		printf("%d\n", _que->front->num);
	}
}
void back(deque* _que)
{
	if (_que->size == 0)  printf("-1\n");
	else
	{
		printf("%d\n", _que->back->num);
	}
}

void doCommand(deque* _que, char* command)
{
	char* temp = strtok(command, " ");

	if (!strcmp(temp, "push"))
	{
		push(_que, atoi(strtok(NULL, " ")));
	}
	else if (!strcmp(temp, "pop"))
	{
		pop(_que);
	}
	else if (!strcmp(temp, "size"))
	{
		size(_que);
	}
	else if (!strcmp(temp, "empty"))
	{
		empty(_que);
	}
	else if (!strcmp(temp, "front"))
	{
		front(_que);
	}
	else if (!strcmp(temp, "back"))
	{
		back(_que);
	}
}

int main(void)
{
	int N;

	char inputString[13] = { 0, };
	deque que = { 0, };

	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++)
	{
		scanf("%[^\n]s", inputString);
		getchar();

		doCommand(&que, inputString);
	}

	return 0;
}