
// /*
// given n take array of n n = 4 ; [2 7 5 1] x = 8
// find two value sum of x ,    7+1 = x true

// */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int n , x;
//      cin>>n>>x;
//      vector<int>v;
//      for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//      }
//      int fI = -1 , sI = -1;
//      for(int i =0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(v[i] + v[j] ==x) {
//                 fI = i;
//                 sI = j;
//                 break;
//             }
//         }
//      }
//      cout<<fI +1 <<" "<<sI+1<<endl;
// }

// // optimization nlogn
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//          int n , x;
//      cin>>n>>x;
//      vector<int>v;
//      map<int ,int>mp;
//      for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//         mp[x] =i+1;
//     }
//     for(int i=0;i<n;i++){
//          int need = x-v[i];
//          if(mp.count(need)){
//             cout<<mp[need] <<" "<<i+1;
//             return 0;
//          }

//             mp[v[i]] = i+1;

//     }
//     cout<<"IMPOSSIBLE"<<endl;
// }

// // using two pointer
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//          int n , x;
//      cin>>n>>x;
//      vector<int>v;
//      map<int ,int>mp;
//      for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//         mp[x] =i+1;
//     }
//      sort(v.begin(),v.end());
//     int l =0 , r = n-1;
//     while(l<r){
//        if(v[l] + v[r] ==x) {
//         cout<<mp[v[l]]<<" "<<mp[v[r]];
//         return 0;
//        }
//       else if(v[l] +v[r] >x){
//         r--;
//       }
//       else{
//         l++;
//       }
//     }

//   cout<<"IMPOSSIBLE"<<endl;
// }

//  vector using
#include <bits/stdc++.h>
using namespace std;
int main()
{

   int n, target;
   cin >> n >> target;
   vector<pair<int, int>> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i].first;
      arr[i].second = i + 1;
   }
   sort(arr.begin(), arr.end());
   int l = 0, r = n - 1;
   while (r >= 0)
   {
      while (arr[l].first + arr[r].first < target && l < r)
      {
         l++;
      }
      if (l != r && arr[l].first + arr[r].first == target)
      {
         cout << arr[l].second << " " << arr[r].second << "\n";
         return 0;
      }
      else
      {
         r--;
      }
   }
   cout << "IMPOSSIBLE";
}