#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int N = 0, K = 0;
	int index = 0;

	cin >> N >> K;
	vector<int> inputs(N);

	for (int i = 0; i < N; i++)
	{
		inputs[i] = i + 1;
	}

	cout << "<";
	while (!inputs.empty())
	{
		index = (index + K - 1) % inputs.size();
		cout << inputs[index];
		inputs.erase(inputs.begin() + index);
		if (!inputs.empty())  cout << ", ";
	}
	cout << ">\n";

	return 0;
}