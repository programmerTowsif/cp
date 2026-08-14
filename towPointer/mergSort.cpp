/*
 mersort work 
  make two array 
  [ 1 , 5 , 7] sort array
   1^  ^
  [ 3 , 4 , 8 , 9] sort array
    2^ 
  first comparison (1,3) which lass [1 then 3 ] move 
  second comparison (5,3) which lass 3 move 4
  third comparison (4,5) which lass 4 move move 8
  4th  comparison  (5,8) whiche lass 5 move 7
  5th   comparison (7,8) which lass 7 move 
  6th  comparison (8 ,9) which lass 8 move 9
  lass point 9 
  after merge sort
   [1,3,4,5,7,8,9]
   link:::: https://leetcode.com/problems/merge-sorted-array/description/
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ; cin>>n;
  vector<int>vn;
  for(int i =0;i<n;i++){
    int x;
    cin>>x;
    vn.push_back(x);
  }
  int m;
  cin>>m;
  vector<int>vm;
  for(int i=0;i<m;i++){
    int x;
    cin>>x;
    vm.push_back(x);
  }
  sort(vn.begin(),vn.end());
  sort(vm.begin(),vm.end());
  int r =0 , l=0;
  vector<int>merg;
  while(l<n && r<m){
    if(vn[l] < vm[r]){
      merg.push_back(vn[l]);
      l++;
    }
    else{
      merg.push_back(vm[r]);
      r++;
    }
  }
  while(l<n){
    merg.push_back(vn[l]);
    l++;
  }
  while(r<m){
    merg.push_back(vm[r]);
    r++;
  }
  for(auto it:merg){
    cout<<it<<" ";
  }
}