/*
maximum sized sub Arry , all the value are unique
0    0    1   1   2    2  4   6    6   starting index
[1 , 3 ,  1 , 4 , 3 , 2 , 4 , 2 , 5]   main array 
0    1    2   3   4   5   6    7   8   ending index
|_|      |__________| 
|__ ___|
   |_______|
   |____________|
         
  ** include next element , but leave variable elements 
     leave elements on depend condition 
for 1st elements:   [ 1 ]
for 2nd elements:   [3 , 1 ]
for 3rd elements:   [1 ,3]
for 4th elements:   [4 , 1 ,3]
for 5th elements:   [3, 4 , 1 ]
for 6th elements:   [ 2 , 3, 4 , 1] == max 
for 7th elements:   [4 , 2 , 3]
for 8th elements:   [ 2 , 4]
for 9th elements:   [5 , 2 , 4  ] 
*/


#include<bits/stdc++.h>
using namespace std;
int main(){

  int arr[] = {1 , 3 ,  1 , 4 , 3 , 2 , 4 , 2 , 5};
  map<int,int>mp;
  queue<int>q;
  int ans =0;
  for(int i =0;i<8;i++){
    mp[arr[i]]++;
    q.push(arr[i]);
    while(mp[arr[i]]>1){
      int x = q.front();
            q.pop();

            mp[x]--;
    }
    ans = max(ans,(int)q.size());
  }
  cout<<ans<<endl;
}