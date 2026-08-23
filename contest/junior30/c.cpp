#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin >> len;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < len; i++)
    {
        if (s1[i] == '0' && s2[i] == 'o')
            s1[i] = 'o';
        else if (s1[i] == 'o' && s2[i] == '0')
            s1[i] = '0';

        if (s1[i] == '1' && s2[i] == 'l')
            s1[i] = 'l';
        else if (s1[i] == 'l' && s2[i] == '1')
            s1[i] = '1';
    }
 
    if (s1 == s2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
}