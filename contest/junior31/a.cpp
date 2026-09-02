 #include<bits/stdc++.h>
 using namespace std;
 void solve(){
    int x ,y , z;
    cin>>x>>y>>z;
    int mn = min(y,z);
    cout<<(x-mn)+1<<endl;
 }
 int main(){
    int t;
    cin>>t;
    // t=1;
    while(t--)
    solve();
 }