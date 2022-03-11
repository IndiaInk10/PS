#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string input;
	int bYes;

	while(1) 
	{
		cin >> input;
		if (stoi(input) == 0)  break;
		bYes = 1;

		for (int i = 0; i < input.length() / 2; i++)
		{
			if (input[i] == input[input.length() - 1 - i])  continue;
			else
			{
				bYes = 0;
				break;
			}
		}

		if (bYes)  cout << "yes" << endl;
		else  cout << "no" << endl;
	}

	return 0;
}