#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
	string input;
	int sum = 0;

	getline(cin, input);

	input.erase(remove(input.begin(), input.end(), ' '), input.end());

	for (int i = 0; i < input.length(); i++)
	{
		sum += pow(input[i] - '0', 2);
	}

	cout << sum % 10 << endl;

	return 0;
}