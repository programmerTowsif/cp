/*
take an array [5,4,1,3,7,9,2]
sum of 1 wind [5,4,1,3] sum =13
  sum of 2 wind [4,1,3,7] sum =15 ([13-5]+7) = 15
    sum of 3 wind [1,3,7,9] sum =20 ([15-4]+9) = 20
       sum of 4 wind [3,7,9,2] sum =21 ([20-1]+2) = 21

** condition : 1st window sum 
             : minuse first element fro sum 

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i =0;i<n;i++)cin>>arr[i];


    // 
    int sum = 0;
    for(int i =0;i<k;i++)
    {
        sum+=arr[i];
    }
     cout<<sum<<endl;
    for(int i =0;i<n-k;i++){
        sum-=arr[i];
        sum+=arr[i+k];
        cout<<sum<<endl;
    }
   
}