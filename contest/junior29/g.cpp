 #include<bits/stdc++.h>
 using namespace std;
 void solve(){
     int n;
    cin >> n;
    vector<int>ar(n);
    set<int> s;
    vector<int>v;

    for (int i = 0; i < n; i++) {
         cin>>ar[i];
    }

    for(int i = n-1;i>=0;i--){
        if(s.find(ar[i]) == s.end()){
            s.insert(ar[i]);
            v.push_back(ar[i]);
        }
    }
  reverse(v.begin(),v.end());
  cout<<v.size()<<endl;
  for(int x:v) cout<<x<<" ";
  cout<<endl;
    
 }
 int main(){
    int t;
    // cin>>t;
    t=1;
    while(t--)
    solve();
 }