#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct _human {
	int index;
	int age;
	string name;
} human;

bool compare(human h1,human h2) {
	if (h1.age == h2.age)  return h1.index < h2.index;

	return h1.age < h2.age;
}

int main(void)
{
	int N = 0;

	cin >> N;
	vector<human> people(N);

	for (int i = 0; i < N; i++)
	{
		people[i].index = i;
		cin >> people[i].age >> people[i].name;
	}

	sort(people.begin(), people.end(), compare);

	for (int i = 0; i < N; i++)
	{
		cout << people[i].age << " " << people[i].name << "\n";
	}

	return 0;
}