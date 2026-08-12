/*
 there is ans arr [5 ,4 ,3, 7, 9 ,2 ]
       k = 4      [5 , 4 , 3 , 7]  size 4 first window 
                      [ 4  3 ,7 , 9]   size 4 2nd window
                          [ 3 , 7 , 9 , 2] size 4 3rd window
       windwos size n - k+1
                    6 - 4 + 1  == 3 


*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n , k;
//     cin>>n >>k ;
//     int arr[n+1];
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i =0;i< (n -k +1);i++){
//         for(int j = i ;j<k+i;j++){
//             cout<<arr[j]<<" ";
//         }cout<<endl; // updated
//     }
// /*
// input (n , k) 7 4
// arr[i]       2 3 5 2 5 3 8
// 1st window   2 3 5 2 
// 2nd window     3 5 2 5 
// 3rd window       5 2 5 3 
// 4th windwo         2 5 3 8 
// o(n^2)
// */ 
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin>>n >>k ;
    int arr[n+1];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    // o(n**2)
    for(int i =0;i< (n -k +1);i++){
        int sum =0;
        for(int j = i ;j<k+i;j++){
           sum+=arr[j];
        }cout<<sum<<endl; // updated
    
   }
//    optimaization 
// o(n) convert 
int sum = 0;
for(int i =0;i<k;i++) {
    sum+=arr[i];
}
cout<<sum<<endl;
for(int i = 0;i<n-k;i++){
     
    sum -=arr[i];
    sum+=arr[k+i];
    cout<<sum<<endl;
}
/*
input (n , k) 7 4
arr[i]       2 3 5 2 5 3 8
1st window   2 3 5 2 
2nd window     3 5 2 5 
3rd window       5 2 5 3 
4th windwo         2 5 3 8 
o(n^2)
*/ 
}