#include<bits/stdc++.h>
using namespace std;
int ar[101] , pre[101];
int main(){
    // 2 | 3 | 5 | -4 | 1 |6 | -100  orginal array
    // 2 | 5 | 10| 6  | 7 |13| -87  frefix sum 
    // ^                    ^
    //     ^                ^
    //         ^            ^
    //             ^        ^
    // (l , r)  ^           ^ 
    // r fixed l variable  
    /*
        max       max        max          max 
       (1 , 1)   (1 ,2)     (1 , 3)     (1 , 4)
                 ( 2 ,2)    (2 , 3)     (2, 4 )
                            (3 ,3 )     (3 , 4)
                                        (4 , 4)

     example 
          // 2 | 5 | -3 | 4 | -19 |3   orginal array
          // 2 | 7 | 4 |  8 | -11 |-8|   frefix sum    
                         ^fixed
                         8 - 0 = *
                         8 - 2 = 6
                         8 - 4 = 4
       amr target thakbe minimum number  bhad dibo toto amr max value pabo .....   
       r ==== 1 to n 
       ans = max()                                             
     */    
    // codding part 
   int n;
   cin>>n;
   for(int i =1;i<=n;i++){
    cin>>ar[i];
    pre[i] = pre[i-1] + ar[i];
   }
   int ans = 0 , mn = 0;
   for(int i =1;i<=n;i++){

     ans = max(ans , pre[i] - mn);
     mn = min(mn , pre[i]);
     
   }
    cout<<ans;
     
    return 0;
}