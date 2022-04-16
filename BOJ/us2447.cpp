#include <iostream>

using namespace std;

void CountingStars(int type)
{
    switch(type)
    {
        case 0: cout << "   ";
                break;
        case 1: cout << "***";
                break;
        case 2: cout << "*  *";
                break;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

    int N = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 1; j <= N; j*=3)
            CountingStars(N%j);
        cout << "\n";
    }

    return 0;
}