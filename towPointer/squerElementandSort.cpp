/*

 intput : nums = [-4 , -1 , 0 ,  3 , 10];
        squere = 16  , 1 , 0  , 9, 100
        sort  =   0  , 1 , 9 , 16 , 100

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vc = {-4 , -1 , 0 ,  3 , 10};
      int n =5;
      for(int i =0 ;i<n;i++){
           vc[i] = vc[i] * vc[i];
      }
      sort(vc.begin(),vc.end());
      for(auto x:vc) cout<<x<< " ";
  }

//   time complexity  = n*longn 
// i will be try order = o(n) using two pointer 
// work: 1 ) squere kora , 
        //  2)  divided by 2 part of array 
        // 3 ) implemention marge sort

 #include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vc = {-4 , -1 , 0 ,  3 , 10};
      int s =5;
      for(int i =0 ;i<s;i++){
           vc[i] = vc[i] * vc[i];
      }
      vector<int>v1,v2;
       
    //    16 , 1 so eta sort korar jno amr reverse krla 
      for(int i =(s/2)-1;i>=0;i--) 
       v1.push_back(vc[i]);
       // eta thik thakebe 0 , 9 , 100
       for(int i =s/2;i<s;i++) 
       v2.push_back(vc[i]);
       
       int n = v1.size() , l =0;
       int m = v2.size() , r =0;
       vector<int>mrg;
       while(l<n && r<m){
        if(v1[l] < v2[r]){
            mrg.push_back(v1[l]);
            l++;
        }
        else{
            mrg.push_back(v2[r]);
            r++;
        }
       }
       while(l<n){
        mrg.push_back(v1[l]);
        l++;
       }
       while(r<m){
        mrg.push_back(v2[r]);
        r++;
       }
      for(auto x:mrg) cout<<x<< " ";
    }       