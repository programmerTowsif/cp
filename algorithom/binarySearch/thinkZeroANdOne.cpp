/*

 arr = 0 0 0 0 0 1 1 1 1 1
index= 1 2 3 4 5 6 7 8 9 10
outpur: last 0 index  5 
      : first 1 index 6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {0 , 0 , 0 , 0 , 1 , 1 ,1, 1};
    int l =0 , r = v.size();
    while(l<r){
        int mid = (l+r)/2;
        if(v[mid] ==0) l = mid+1;
        else r = mid;
    }
    int ans0 = l-1;
    int ans1 = l;
    cout<<ans0<<" "<<ans1;
}