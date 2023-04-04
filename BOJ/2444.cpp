#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int N;
    cin >> N;
    for (int i = 1, s = 1; i > 0; i += s, cout << "\n")
    {
        if(i == N)
            s *= -1;

        for (int j = 0; j < N - i; ++j)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; ++j)
            cout << "*";
    }
    return 0;
}