#include <iostream>
#include <algorithm>

#define MAX_LENGTH 10001

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int nList[MAX_LENGTH] = { 0, };
	int N, input;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		nList[input]++;
	}

	for (int i = 1; i < MAX_LENGTH; i++)
	{
		for (int j = 0; j < nList[i]; j++)
		{
			cout << i << '\n';
		}
	}

	return 0;
}