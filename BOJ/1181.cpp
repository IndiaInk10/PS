#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string s1, string s2)
{
	if (s1.length() == s2.length()) return s1 < s2;

	return s1.length() < s2.length();
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int N = 0;

	cin >> N;
	vector<string> words(N);

	for (int i = 0; i < N; i++)
	{
		cin >> words[i];
	}

	sort(words.begin(), words.end(), compare);

	cout << words[0] << "\n";
	for (int i = 1; i < N; i++)
	{
		if(words[i - 1] != words[i])  cout << words[i] << "\n";
	}

	return 0;
}