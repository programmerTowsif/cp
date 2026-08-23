 #include<bits/stdc++.h>
 using namespace std;
 void solve(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    map<int,int>mp;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans = 0;
    int mx = INT_MIN;
    for(auto x:mp){
        // cout<<x.first<<" "<<x.second<<endl;
        if(x.second > mx){
              mx = max(mx,x.second);
        }
    }
    int maxNumberCount =0;
    for(auto x:mp){
        if(mx == x.second) maxNumberCount++;
    }
    if(maxNumberCount<2){
        for(auto x:mp){
        if(mx == x.second) {
            cout<<"YES"<<endl;
        }
    }
    }else cout<<"NO"<<endl;
    // cout<<mx<<endl;
    
 }
 int main(){
    int t;
    cin>>t;
    // t=1;
    while(t--)
    solve();
 }