#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int bUp;
	string input;
	int cmpN = 0;

	getline(cin, input);

	input.erase(remove(input.begin(), input.end(), ' '), input.end());

	if (input[0] == '1')  bUp = 1;
	else if (input[0] == '8') bUp = 0;
	else
	{
		cout << "mixed" << endl;
		return 0;
	}

	for (int i = 1; i < input.length(); i++)
	{
		cmpN = input[i] - '0';

		if (bUp)
		{
			if (cmpN == input[i - 1] - '0' + 1)
			{
				if (i == input.length() - 1)
				{
					cout << "ascending" << endl;
					break;
				}
				else
					continue;
			}
			else
			{
				cout << "mixed" << endl;
				break;
			}
		}
		else
		{
			if (cmpN == input[i - 1] - '0' - 1)
			{
				if (i == input.length() - 1)
				{
					cout << "descending" << endl;
					break;
				}
				else
					continue;
			}
			else
			{
				cout << "mixed" << endl;
				break;
			}
		}
	}

	return 0;
}