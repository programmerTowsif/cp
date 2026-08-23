 #include<bits/stdc++.h>
 using namespace std;
 void solve(){
    int  w,x,y,z;
    cin>>w>>x>>y>>z;
    if(w == x || w == y || w == z || 
        x+y == w || x+z == w || y+z == w || x+y+z ==w) cout<<"YES"<<endl;
    
   else cout<<"NO"<<endl;
     
     
 }
 int main(){
    int t;
    cin>>t;
    // t=1;
    while(t--)
    solve();
 }