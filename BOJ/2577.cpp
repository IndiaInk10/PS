#include <iostream>
using namespace std;

int main()
{
    int c[10] = {0,};
    int A, B, C;
    cin >> A >> B >> C;
    A = A * B * C;
    while (A != 0)
    {
        ++c[A%10];
        A /= 10;
    }
    for (int i : c)
        cout << i << "\n";
    return 0;
}