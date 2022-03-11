#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N = 0;

	cin >> N;
	vector<int> inputs(N);

	for (int i = 0; i < N; i++)
	{
		cin >> inputs[i];
	}

	sort(inputs.begin(), inputs.end());

	for (int i = 0; i < N; i++)
	{
		cout << inputs[i] << '\n';
	}

	return 0;
}