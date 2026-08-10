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

    return 0;
}