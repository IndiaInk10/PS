#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N = 0, M = 0, B = 0;
	int min = 256, max = -1;
	
	cin >> N >> M >> B;

	vector<vector<int>> map;
	for (int i = 0; i < N; i++)
	{
		vector<int> line(M);
		map.push_back(line);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
			if (map[i][j] > max)  max = map[i][j];
			if (map[i][j] < min)  min = map[i][j];
		}
	}

	// 작은거 기준으로 

	return 0;
}