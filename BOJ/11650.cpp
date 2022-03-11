#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct twoDemension{
	int x;
	int y;
} TD;

bool compare(TD td1, TD td2)
{
	if (td1.x == td2.x)  return td1.y < td2.y;
	
	return td1.x < td2.x;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int N;
	
	cin >> N;
	vector<TD> inputs(N);

	for (int i = 0; i < N; i++)
	{
		cin >> inputs[i].x >> inputs[i].y;
	}

	sort(inputs.begin(), inputs.end(), compare);

	for (int i = 0; i < N; i++)
	{
		cout << inputs[i].x << " " << inputs[i].y << "\n";
	}

	return 0;
}