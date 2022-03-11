#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int A = 0, B = 0;
	int max = 0, min = 0, temp = 0;
	int sumA = 0, sumB = 0;

	cin >> A >> B;

	if (A < B)  swap(A, B);
	max= A, min = B;

	while (max % min != 0)
	{
		temp = min;
		min = max % min;
		max = temp;
	}

	sumA = A, sumB = B;
	while (1)
	{
		if (sumA == sumB)  break;
		else
		{
			if (sumA < sumB)
			{
				while (sumA < sumB)  sumA += A;
			}
			// A > B
			else
			{
				while (sumA > sumB) sumB += B;
			}
		}
	}

	cout << min << "\n" << sumA << "\n";

	return 0;
}