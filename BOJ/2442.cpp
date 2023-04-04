#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i, cout << "\n")
    {
        for (int j = 1; j < N - i; ++j)
            cout << " ";
        for (int j = 0; j < i * 2 + 1; ++j)
            cout << "*";
    }
    return 0;
}