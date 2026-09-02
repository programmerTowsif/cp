#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<char>v;
  for(int i =0;i<n;i++){
    for(int j=0;j<2;j++){
      v.push_back(s[i]);
    }
    
  }
  for(auto x:v) cout<<x;
  cout<<endl;
}