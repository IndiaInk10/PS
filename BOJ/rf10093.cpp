#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    long long int A, B;
    cin >> A >> B;
    if(A > B)
    {
        A += B;
        B = A - B;
        A -= B;
    }
    int cnt =  B - A + 1 - 2;
    switch(cnt)
    {
    case -1:
    case 0:
        cout << 0;
        break;
    default:
        cout << cnt << "\n";
        for (long long int i = A + 1; i < B; i++)
            cout << i << " ";
        break;
    }
    return 0;
}