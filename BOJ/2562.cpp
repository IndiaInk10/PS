#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n, a, m = 0;
    for (int i = 0; i < 9; ++i)
    {
        cin >> n;
        if(n > m)
        {
            a = i + 1;
            m = n;
        }
    }
    cout << m << "\n"
         << a;
    return 0;
}