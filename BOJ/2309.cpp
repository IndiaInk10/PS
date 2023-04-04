#include <iostream>
#include <vector>
#include <algorithm> // next_permutation
using namespace std;

// 9C7
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    vector<int> d;
    vector<int> c{0, 0, 1, 1, 1, 1, 1, 1, 1}; // 보조수열 : 또한 정렬
    vector<int> f;
    for (int i = 0, t; i < 9; ++i)
    {
        cin >> t;
        d.push_back(t);
    }
    sort(d.begin(), d.end()); // 순열을 쓰기 위해선 반드시 정렬이 되어 있어야 함
    int s;
    do {
        s = 0;
        f.clear();
        for (int i = 0; i < d.size(); ++i)
        {
            if(c[i] != 0)
            {
                f.push_back(d[i]);
                s += d[i];
            }
        }
        if(s == 100)
            break;
    } while (next_permutation(c.begin(), c.end()));
    for(int i : f)
        cout << i << "\n";
    return 0;
}