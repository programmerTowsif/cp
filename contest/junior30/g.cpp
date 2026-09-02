 #include<bits/stdc++.h>
 using namespace std;
 void solve(){
  int n , k;
  cin>>n>>k;
  vector<int>vc;
  set<int>s;
  map<int,int>mp;
  for(int i=0;i<n;i++){
     int x;
     cin>>x;
     vc.push_back(x);
     s.insert(x);
     mp[x] = i+1;
  }
  if(s.size()>=k){
            cout<<"YES"<<endl;
           int cnt =0;
           for(auto it:s){
              if(cnt ==k) break;
              else cout<<mp[it]<<" ";
              cnt++;
           }
  }
  else cout<<"NO"<<endl;
  
 }
 int main(){
    int t;
    // cin>>t;
    t=1;
    while(t--)
    solve();
 }