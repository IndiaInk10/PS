#include <iostream>
#include <vector>
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
		
		if (input.count(checkIn))  input[checkIn]++;
		else  input.insert(make_pair(checkIn, 1));
	}

	cin >> M;
	vector<int> check(M);

	for (int i = 0; i < M; i++)
	{
		cin >> checkIn;

		if (input.count(checkIn))  check[i] = input[checkIn];
		else  check[i] = 0;
	}

	for (int i = 0; i < M; i++)
	{
		cout << check[i] << " ";
	}
	cout << "\n";

	return 0;
}