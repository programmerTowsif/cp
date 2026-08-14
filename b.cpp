#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
 
    vector<int>t(n);
    for(int i =0; i<n; i++) cin>> t[i];
 
    sort(t.begin(),t.end());
    t.erase(unique(t.begin(), t.end()), t.end());
 
    int s = t.size();
 
    for(int i=0; i<s-2; i++){
        if(t[i+1] - t[i] == 1 &&  t[i+2] - t[i+1] == 1){
        cout<<"YES"<<endl;
        return;
        }
      }
      cout<<"NO"<<endl;
    for(auto it:t) cout<<it<<" ";
 
}
 
int main(){
     ios_base::sync_with_stdio();
     cin.tie(0);
 
     solve();
 
}