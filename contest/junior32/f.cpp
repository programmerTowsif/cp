#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;
    for (int i = 0; i < w; i++)
    {
        vector<char> vS(h);
        for (int j = 0; j < h; j++)
            cin >> vS[j];
        for (int j = 1; j < h - 1; j++)
        {
            if (vS[j - 1] == '#' && vS[j] == '*' && vS[j + 1] == '#')
            {
                cout << i + 1 << j << endl;
                break;
            }
        }
    }
}