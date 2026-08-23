#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    while (k--)
    {
        if (n % 10 == 0)
            n = n / 10;
        else
            n = n - 1;
    }
    cout << n << endl;
}
int main()
{
    int t;
    t = 1;
    // cin >> t;

    while (t--)
        solve();
}