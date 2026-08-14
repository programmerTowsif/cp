/*
this [0 0 1 0 3 4 0] you make outpu shifting 0 right side 
     [1  3  4 0 0 0]

*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>vc;
//     for(int i =0;i<n;i++){
//         int x;
//         cin>>x;
//         vc.push_back(x);
//     }
//     queue<int>q;
//     int contZ =0;
//     for(auto x:vc){
//         if(x != 0) q.push(x);
//         else contZ++;
//     }
//     for(int i=0; i<contZ;i++){
//         q.push(0);
//     }
//     while(! q.empty()){
//         int x = q.front();
//         cout<<x<<" ";
//         q.pop();
//     }
// }

/*
 this problem implement two pointer 

 g(p)
  0   0   1   0    3   4   0
 r(p)
 condintion: green point find out non zero 
            red point alwys catch zero   
            then thye are swaping 
    First indext : g(p) pass 2step element of 1   
         g(p)
  0   0   1   0    3   4   0
 r(p)     
 then swapping those 
         g(p)
  1   0    0  0    3   4   0
 r(p) 
 then red point find zero so he go 2nd step
 and green point go to 3 element 
                 g(p)
  1   0    0  0    3   4   0
     r(p)  
     then swapping those the value
                 g(p)
  1   3   0  0    0   4   0
     r(p)    
   after red point    find zero so he go 2nd step
    and green point go to 4 element 
                       g(p)
     1   3   0  0    0   4   0
           r(p)
    then swapping those the value
                               g(p)
     1   3   4  0    0   0   0
              r(p)
  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n =7 ;
    // cin >> n;

    vector<int> vc = {0, 0, 1, 0, 3, 4, 0};

    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     vc.push_back(x);
    // }

    int green = 0, red = 0;

    while (green < n && red < n) {

        // red দিয়ে 0 খুঁজছি
        while (red < n && vc[red] != 0)
            red++;

        if (red >= n)
            break;

        // green কে red-এর পর থেকে শুরু করাচ্ছি
        green = max(green, red + 1);

        // green দিয়ে non-zero খুঁজছি
        while (green < n && vc[green] == 0)
            green++;

        if (green >= n)
            break;

        // 0 এবং non-zero swap
        swap(vc[red], vc[green]);

        red++;
        green++;
    }

    for (auto x : vc) {
        cout << x << " ";
    }

    return 0;
}
// time : 30mint