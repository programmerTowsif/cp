#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ,target; cin>>n>>target;
  vector<pair<int,int>>v(n);
  for(int i =0;i<n;i++){
    cin>>v[i].first;
    v[i].second = i+1;
  }
  sort(v.begin(),v.end());
  for(int i =0;i<n;i++){
    int l = i+1 , r = n-1 , currentTarget = target -v[i].first;

     while(r >= i+1){
        while(v[l].first + v[r].first < currentTarget && l<r) l++;
        if(l!=r && v[l].first +v[r].first == currentTarget){
            cout<<v[l].second<<" "<<v[r].second<<" "<<v[i].second<<"\n";
           return 0;
        }
        r--;
     }

  }
  cout<<"impossible";
}