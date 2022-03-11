#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	// con = condition
	int n = 0, con = 1, index = 0;
	bool bNo = false;
	string print = "";
	
	cin >> n;
	vector<int> nList(n);
	stack<int> stk;

	for (int i = 0; i < n; i++)
	{
		cin >> nList[i];
	}

	while (con <= n)
	{
		if (con < nList[index])
		{
			while (con != nList[index])
			{
				stk.push(con);
				print += "+";

				con++;
			}
		}
		else
		{

		}
		

		print += "+-";

		con++;
		index++;
	}

	while (!stk.empty())
	{
		if (stk.top() != nList[index])
		{
			bNo = true;
			break;
		}

		stk.pop();
		print += "-";

		index++;
	}

	if (bNo)  cout << "No" << '\n';
	else
	{
		for (int i = 0; i < print.length(); i++)
		{
			cout << print[i] << '\n';
		}
	}

	return 0;
}