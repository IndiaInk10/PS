#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n, t, Y = 0, M = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        Y += (t / 30 + 1) * 10;
        M += (t / 60 + 1) * 15;
    }
    if(Y > M)
        cout << "M " << M;
    else if(Y < M)
        cout << "Y " << Y;
    else
        cout << "Y M " << Y;
    return 0;
}