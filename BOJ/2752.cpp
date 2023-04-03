#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    vector<int> v(3);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int n : v)
        cout << n << " ";
    return 0;
}