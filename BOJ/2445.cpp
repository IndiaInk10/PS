#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int N;
    cin >> N;
    string s;
    for (int i = 0; i < 2*N; ++i)
        s += " ";

    for (int i = 0, n = 1; i >= 0; i += n)
    {
        if(i == N - 1)
            n *= -1;
        string cs = s;
        for (int j = 0; j <= i; ++j)
            cs[j] = cs[2*N - 1 - j] = '*';
        cout << cs << "\n";
    }

    return 0;
}