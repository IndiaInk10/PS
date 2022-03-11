#include <iostream>
#include <cmath>

using namespace std;

// a 97

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int length = 0;
	__int64 sum = 0;
	string input;

	cin >> length;
	cin >> input;

	for (int i = 0; i < length; i++)
	{
		sum += ((int)input[i] - 96) * pow(31, i);
	}

	cout << sum << '\n';

	return 0;
}