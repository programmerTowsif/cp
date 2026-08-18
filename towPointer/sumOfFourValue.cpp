#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int target;
    cin>>n>>target;
    vector<pair<int,int>>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr.begin(),arr.end());
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int l = j+1 , r = n-1 ;
            int  currentTarget = target - arr[i].first - arr[i].first;
            while(r>=j+1){
                while(arr[l].first + arr[r].first < currentTarget && l<r) 
                l++;
                if(l!=r && arr[l].first + arr[r].first == currentTarget){
                cout<<arr[l].second<<" "<<arr[r].second<<" "<<arr[i].second<<" "<<arr[j].second<<" ";
                  return 0;
                }
                r--;
            }
        }
    }
}