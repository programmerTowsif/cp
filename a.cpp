#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    while(t--){
       int n, m;
    cin >> n >> m;
    vector<string> vS(n);
    string s1;
    string s2;
    string s3;
    for (int i = 0; i < n; i++)
    {
        cin >> vS[i];
        s1 += vS[i][0];
    }
    sort(s1.begin(), s1.end());
    // string s2;

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        s2 += s;
    }
    // string s3;
    for (int i = 0; i < s2.size(); i++)
    {
        char x = tolower(s2[i]);
        s3 += x;
    }
    sort(s3.begin(), s3.end());
    // for (int i = 0; i < s3.size(); i++)
    //     cout << s3[i] << " ";

    map<char, int> s1Con, s3Con;
    for (int i = 0; i < s1.size(); i++)
    {
        s1Con[s1[i]]++;
    }
    for (int i = 0; i < s3.size(); i++)
    {
        s3Con[s3[i]]++;
    }
    // for (auto x : s1Con)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    // cout << endl;
    // for (auto x : s2Con)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        if (s1Con[c] > s3Con[c])
        {
            cout << "NO\n";
            return 0;
        }
        
    }
    cout << "YES\n";
    }

   
    return 0;
}