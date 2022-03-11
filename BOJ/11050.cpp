#include <iostream>

using namespace std;

int factorial(int n)
{
	int sum = 1;

	for (int i = n; i > 0; i--)
	{
		sum *= i;
	}

	return sum;
}

int main(void)
{
	int N = 0, K = 0;

	cin >> N >> K;

	if (K < 0 || K > N)  cout << "0" << endl;
	else  cout << factorial(N) / (factorial(K) * factorial(N - K)) << endl;

	return 0;
}