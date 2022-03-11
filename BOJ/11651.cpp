#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> xy1, pair<int, int> xy2) 
{
	if (xy1.second == xy2.second)  return xy1.first < xy2.first;

	return xy1.second < xy2.second;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int N = 0;
	int x = 0, y = 0;

	cin >> N;
	vector<pair<int, int>> coord2D(N);

	for (int i = 0; i < N; i++)
	{
		cin >> coord2D[i].first >> coord2D[i].second;
	}

	sort(coord2D.begin(), coord2D.end(), compare);

	for (int i = 0; i < N; i++)
	{
		cout << coord2D[i].first << " " << coord2D[i].second << '\n';
	}

	return 0;
}