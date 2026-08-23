 #include<bits/stdc++.h>
 using namespace std;
 void solve(){
   int n;
   cin>>n;
   
   string s;
   cin>>s;
   int ans=0;
   for(int i =0;i<n;i++){
     cout<<s[i] <<" "<<s[i-1]<<endl;
//     if(s[i-1] == s[i]  && s[i] =='x'){
//         ans++;
//     }
//     else ans=0;
   }
    
 }
 int main(){
    int t;
    cin>>t;
    // t=1;
    while(t--)
    solve();
 }