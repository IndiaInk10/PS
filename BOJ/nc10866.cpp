#include <iostream>

using namespace std;

typedef struct _node {
	int data;
	struct _node* pre;
	struct _node* next;
} node;

typedef struct _deque {
	node* front;
	node* rear;
	int size;
} deque;

void init(deque* q)
{
	q->front = nullptr;
	q->rear = nullptr;
	q->size = 0;
}


int empty(deque* q)
{
	if (q->size > 0) return 0;

	return 1;
}
void pushFront(deque* q, int num)
{
	node* newNode = new node;
	newNode->data = num;
	newNode->pre = nullptr;
	newNode->next = nullptr;

	if (empty(q))
	{
		q->front = newNode;
		q->rear = newNode;
	}
	else
	{
		newNode->next = q->front;
		q->front->pre = newNode;
		q->front = newNode;
	}

	q->size++;
}
void pushBack(deque* q, int num)
{
	node* newNode = new node;
	newNode->data = num;
	newNode->pre = nullptr;
	newNode->next = nullptr;

	if (empty(q))
	{
		q->front = newNode;
		q->rear = newNode;
	}
	else
	{
		newNode->pre = q->rear;
		q->rear->next = newNode;
		q->rear = newNode;
	}

	q->size++;
}

int popFront(deque* q)
{
	if (empty(q))  return -1;

	node* popNode = q->front;
	int popNum = popNode->data;

	q->front = popNode->next;
	delete(popNode);
	q->size--;

	return popNum;
}
int popBack(deque* q)
{
	if (empty(q))  return -1;

	node* popNode = q->rear;
	int popNum = popNode->data;

	q->rear = popNode->pre;
	delete(popNode);
	q->size--;

	return popNum;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int N = 0, num = 0;
	string command;

	deque q;
	init(&q);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> command;

		if (command == "push_front")
		{
			cin >> num;
			pushFront(&q, num);
		}
		else if (command == "push_back")
		{
			cin >> num;
			pushBack(&q, num);
		}
		else if (command == "pop_front")
		{
			cout << popFront(&q) << '\n';
		}
		else if (command == "pop_back")
		{
			cout << popBack(&q) << '\n';
		}
		else if (command == "size")
		{
			cout << q.size << '\n';
		}
		else if (command == "empty")
		{
			cout << empty(&q) << '\n';
		}
		else if (command == "front")
		{
			if (empty(&q))  cout << "-1" << '\n';
			else  cout << q.front->data << '\n';
		}
		else if (command == "back")
		{
			if (empty(&q))  cout << "-1" << '\n';
			else  cout << q.rear->data << '\n';
		}
	}

	return 0;
}