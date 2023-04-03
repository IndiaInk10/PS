#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string s = "DCBAE";
    int sum;
    int y;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> y;
            sum += y;
        }
        cout << s[sum] << "\n";
    }
    return 0;
}