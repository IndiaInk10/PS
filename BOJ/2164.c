#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

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
int pop(deque* _que)
{
	if (_que->size == 0)  printf("-1\n");
	else
	{
		node* temp = _que->front;
		int tempNum = temp->num;
		_que->front = _que->front->next;
		free(temp);
		_que->size--;

		return tempNum;
	}
}

int main(void)
{
	int N;

	deque que = { 0, };

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		push(&que, i);
	}

	while (que.size != 1)
	{
		pop(&que);
		push(&que, pop(&que));
	}

	printf("%d\n", pop(&que));

	return 0;
}