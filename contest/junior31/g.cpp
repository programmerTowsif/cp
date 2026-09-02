// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int>vI(n+1);
//     for(int i =0;i<n;i++)cin>>vI[i];
//    int ans = 0;
//    for(int i =0;i<n;i++) {
//     if(vI[i] >k) break;
//     else ans++;
//    }
//    cout<<ans<<endl;
// }
// #include <bits/stdc++.h>
// #include <string.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(NULL);
//   int n;
//   cin >> n;
//   string s;
//   cin >> s;
//   int count = 0;
//   for (int i = 0; i < s.size() - 1; i++)
//   {
//     if ((s[i] == 'R' || s[i] == 'B') && s[i + 1] == 'G')
//     {
//       continue;
//     }
//     else if ((s[i] == 'R' || s[i] == 'G') && s[i + 1] == 'B')
//     {
//       continue;
//     }
//     else if ((s[i] == 'G' || s[i] == 'B') && s[i + 1] == 'R')
//     {
//       continue;
//     }

//     else
//     {
//       count++;
//     }
//   }

//   cout << count << '\n';
// }

#include<bits/stdc++.h>
using namespace std;
// int main(){
  
//   string s ;
//   cin>>s;
//   int sum =0;
//    int firs = s[0] - '0';
//     if(firs <10 && s.size() ==1){
//      cout<<0<<endl;
//     }
//   else {
//  for(int i=0;i<s.size();i++){
//      if(s[i]=='0') continue;
//      else sum++;
//   }
//   cout<<sum;
//   }
 
  
// }

int main(){
  int n ;
  cin>>n;
 for(int i =1;i<=n;i++)
 {
   for(int j =1;j<=n;j++){

     for(int k =1;k<=n;k++){
      if(i*i + j*j >= k *k){
        cout<<i <<" "<<j<<" "<<k<<endl;
      }
     }
   }
 }
}