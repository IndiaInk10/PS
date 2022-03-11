#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	string input;
	stack<char> check;

	while(1)
	{
		getline(cin, input);
		if (input == ".")  break;

		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == '(' || input[i] == '[')  check.push(input[i]);

			if (input[i] == ')')
			{
				if (check.empty())
				{
					check.push('0');
					break;
				}

				if (check.top() != '(')  break;
				else  check.pop();
			}
			if (input[i] == ']')
			{
				if (check.empty())
				{
					check.push('0');
					break;
				}

				if (check.top() != '[')  break;
				else  check.pop();
			}
		}

		if (check.empty())  cout << "yes" << '\n';
		else
		{
			cout << "no" << '\n';
			while (!check.empty())  check.pop();
		}
	}

	return 0;
}