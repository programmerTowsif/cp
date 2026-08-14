#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    ll n; cin>> n;

    vector<string> vec(n);
    // for(auto &it : vec) cin >> it;
    map <string ,ll> ma;
    ma["Tetrahedron"]=4;
    ma["Cube"]=6;
    ma["Octahedron"]=8;
    ma["Dodecahedron"]=12;
    ma["Icosahedron"]=20;

    ll sum=0;
    string s;
    for (ll i=0; i<n; i++){
        
        cin >> s;
        if(ma.count(s))
        cout << ma[s] << " " ;
        vec.push_back(s);
        sum+=ma[s];
    }
//   for(int i =0;i<n;i++){
//     sum+=ma[vec[i]];
//   }
    cout << sum << endl;



    return 0;
}