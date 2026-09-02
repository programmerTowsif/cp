#include <bits/stdc++.h>
using namespace std;

int main()
{
     
    int n;
    cin >> n;
    // if(n % 5 ==0) cout<<n;
    // cout<<n/5;
    if(n <3) cout<<1<<endl;
    else if(n<=5) cout<<5<<endl;
    else{
  int start = (n / 5) * 5;
    int ans = 0;
    for (int i = start + 1; i <= n; i++)
    {

        ans++;
    }

    if (ans == 0 || ans > 2)
        cout << start + 5;
    else
        cout << start << endl;
    }
  
  
  
}