#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n, x, in;
    cin >> n >> x;
    while (n--)
    {
        cin >> in;
        if (in < x)
            cout << in << " ";
    }
    return 0;
}