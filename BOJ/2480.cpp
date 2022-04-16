#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

    int input = 0;
    int diceResult[6] ={0,};
    int max = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> input;
        diceResult[input - 1]++;
    }

    for(int i = 0; i < 6; i++)
    {
        if(diceResult[i] > 0) max = i + 1;

        if(diceResult[i] == 2)
        {
            cout << 1000 + (i+1) * 100 << "\n";
            break;
        }
        else if(diceResult[i] == 3)
        {
            cout << 10000 + (i+1) * 1000 << "\n";
            break;
        }
        else if(diceResult[i] < 2 && i + 1 == 6)
            cout << max * 100 << "\n";    
    }


    return 0;
}