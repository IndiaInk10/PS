#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int N;
    cin >> N;
    for (int i = N; i > 0; --i, cout << "\n")
        for (int j = 0; j < i; ++j)
            cout << "*";
    return 0;
}