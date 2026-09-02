#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), [](string a, string b)
         { return a.size() < b.size(); });
    // cout << "_________" << endl;
    // for (auto x : v)
    //     cout << x << endl;
    // cout << "_________" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
           if(v[i].find(v[j])==string::npos) 
           {
            cout<<"NO"<<endl;
            return 0;
           }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}