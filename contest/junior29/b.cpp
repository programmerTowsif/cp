 #include<bits/stdc++.h>
 using namespace std;
 void solve(){
    int a , b, c;
    cin>>a>>b>>c;
    int mx = max(a,c);
    
    if(mx<=b){
    cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
 }
 int main(){
    int t;
    t=1;
    cin>>t;

    while(t--)
    solve();
 }