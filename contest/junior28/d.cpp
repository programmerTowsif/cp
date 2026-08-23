#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int tCount = 0, aCount = 0;
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == 'T')
            tCount++;
        else
            aCount++;
        i++;
    }
    // cout << tCount << " " << aCount << endl;
    if (tCount == aCount)
    {
        if (s[n - 1] == 'T')
            cout << "A" << endl;
        else
            cout << "T" << endl;
    }
    else if (tCount > aCount)
        cout << "T";
    else
        cout << "A";
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
}