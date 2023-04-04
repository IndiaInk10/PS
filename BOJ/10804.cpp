#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}

int main()
{
    int card[20], b, e;
    for (int i = 0; i < 20; ++i)
        card[i] = i + 1;
    for (int i = 0; i < 10; ++i)
    {
        cin >> b >> e;
        --b, --e;
        if(b == e)
            continue;
        else if(e - b == 1)
            Swap(card[b], card[e]);
        else
        {
            for (int i = 0; i < (e - b + 1) / 2; ++i)
                Swap(card[b + i], card[e - i]);
        }
    }
    for(int i : card)
        cout << i << " ";
    return 0;
}