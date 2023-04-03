#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string S;
    int cnt[26] = {0,};

    cin >> S;
    for(char a : S)
        ++cnt[a - 97];

    for (int i = 0; i < 26; i++)
        cout << cnt[i] << " ";

    return 0;
}