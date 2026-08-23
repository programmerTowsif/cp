/*
input (n , k) 7 4
arr[i]       2 3 5 2 5 3 8
1st window   2 3 5 2   max = 5 min 2 
2nd window     3 5 2 5   max = 5 min 2
3rd window       5 2 5 3  max = 5 min 2
4th windwo         2 5 3 8 max = 8 min 2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , k;
    cin>>n>>k;
    int arr[n+1];
    for(int i =0;i<n;i++) cin>>arr[i];
    // brutforce 
   /*
    for(int i =0;i<n-k+1;i++){
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int j = i;j<k+i;j++){
            mx = max(arr[j],mx);
            mn = min(arr[j],mn);
        }cout<<mx <<"====="<<mn<<endl;
    }
   */
//   optimization 
// 34 min 
// flase idea 
/*
int mn = INT_MAX,mx = INT_MIN;
for(int i =0;i<k;i++){
    mx = max(mx,arr[i]);
    mn = min(mn,arr[i]);
}
cout<<" minimum "<<mn<<"  "<<"max  "<<mx<<endl;
for(int i = 0;i<n-k;i++){
    if(mx <arr[k+i]) mx = arr[i];
    else if(mn>arr[i]) mn = arr[i];
    cout<<" minimum "<<mn<<"  "<<"max  "<<mx<<endl;
}
7 4
1 8 2 -2 4 7 10
 minimum -2  max  8
 minimum -2  max  8
 minimum -2  max  8
 minimum -2  max  2
*/
// try 3rd idea 
// i am using set , bz this continer actually sorted by decending order , first value lowest number and lasat value heighest number on continer 
set<int>st;
for(int i =0;i<k;i++){
    st.insert(arr[i]);
}
int it = *st.begin();
int itEn = *st.rbegin();
st.erase(arr[0]);
 
cout<<it <<" "<<itEn<<endl;
for(int i =0;i<n-k;i++){
  st.insert(arr[k+i]);
  cout<<*st.begin() <<" "<<*st.rbegin()<<endl;
  st.erase(arr[i+1]);
}
// 7 4        
// 1 8 -3 7 9 10 -2
// -3 8
// -3 9
// -3 10
// -2 10
    return 0;
}