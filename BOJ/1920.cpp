#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int N = 0, checkIn = 0, M = 0;

	cin >> N;
	map<int, int> input;

	for (int i = 0; i < N; i++)
	{
		cin >> checkIn;
		input.insert(make_pair(checkIn, 1));
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> checkIn;

		cout << input.count(checkIn) << "\n";
	}

	return 0;
}