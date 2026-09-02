#include<bits/stdc++.h>
 using namespace std;
 int main(){
    long long ans =0;
     for(int i =0;i<64;i++){
        int x;
        cin>>x;
        if(x == 1){
            ans += (unsigned long long)pow(2, i) ;
        }
     }
     cout<<ans<<endl;
    }