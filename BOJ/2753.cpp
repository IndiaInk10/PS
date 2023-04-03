#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int y;
    int bL = 0;
    cin >> y;
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        bL = 1;
    cout << bL;
    return 0;
}