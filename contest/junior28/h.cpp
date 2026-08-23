#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        // cout << s[i] << s[i + 1] << endl;
        string parirOfString = {s[i], s[i + 1]};
        mp[parirOfString]++;
    }
    int mx = INT_MIN;
    for (auto x : mp)
    {
        mx = max(x.second, mx);
    }
    for (auto x : mp)
    {
        if (x.second == mx)
        {
            cout << x.first << endl;
            return;
        }
    }
    // cout<<mx;
}
int main()
{
    int t;
    // cin >> t;
    t=1;
    while (t--)
        solve();
}