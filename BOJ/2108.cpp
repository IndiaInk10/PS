#include <iostream>
#include <cmath>

#define MAX_LENGTH 8001

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int nList[MAX_LENGTH] = { 0, };
	int N = 0, copyN = 0, halfN = 0, num = 0;
	double sum = 0;

	bool bMid = false;
	bool bMin = false;

	int min = 0, max = 0, occurMax = 0;
	int occur[2] = { 4001, 4001 };
	// 0 »ê¼úÆò±Õ 1 Áß¾Ó°ª 2 ¹üÀ§
	int result[3] = { 0, };

	cin >> N;
	copyN = N;
	halfN = N / 2 + 1;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		sum += num;

		nList[num + 4000]++;
	}

	result[0] = round(sum/N);

	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (!nList[i])  continue;
			
		if (!bMin)
		{
			min = i - 4000;
			bMin = true;
		}

		if (!bMid)
		{
			halfN -= nList[i];
			if (halfN <= 0)
			{
				result[1] = i - 4000;
				bMid = true;
			}
		}

		if (nList[i] > occurMax)  occurMax = nList[i];

		copyN -= nList[i];
		if (!copyN)
		{
			max = i - 4000;
			break;
		}
	}

	result[2] = max - min;

	for (int i = 0; i < 2; i++)
	{
		cout << result[i] << '\n';
	}

	copyN = N;
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (!nList[i])  continue;

		if (occur[0] == 4001 && nList[i] == occurMax)
		{
			occur[0] = i - 4000;
			copyN -= nList[i];
			continue;
		}

		if (nList[i] == occurMax)
		{
			occur[1] = i - 4000;
			break;
		}

		copyN -= nList[i];
		if (!copyN)  break;
	}

	occur[1] == 4001 ? cout << occur[0] << '\n' : cout << occur[1] << '\n';

	cout << result[2] << '\n';

	return 0;
}