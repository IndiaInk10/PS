#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n, min = 100, sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> n;
        if(n%2==0)
            continue;
        if(n < min)
            min = n;
        sum += n;
    }
    min == 100 ? cout << -1 : cout << sum << "\n" << min;
    return 0;
}