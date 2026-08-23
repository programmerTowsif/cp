/*
 her name is : alex 
 but typed  : aaaalllleex   (true ) 
            : aaabex (false) not match l is not found 
            : alexn (false ) 
            
    exaple : saeed 
    typed : ssaaed (opore ache 2ta typed e ache ekta not mathch )
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string name , typed;
    cin>>name>>typed;
    int n = name.size() , m = typed.size();
     

    // left 
    int l = 0;
    char L = name[0];
    int LCount = 0;

    // right
    int r = 0;
    char R = typed[0];
    int rCount = 0;
   

    while(l<n && r<m){
        while(l<n && name[l] == L) 
        LCount ++ , l++;
        while(r<m && typed[r] ==R) 
        rCount++, r++;
        if(L != R){
        cout<<"NO";
        break;

        }
        if(LCount >rCount) {
            cout<<"NO";
            break;
        }
        LCount =0 , rCount =0;
        if(l<n)
        L = name[l] ;
        if(r<m)
        R = typed[r];
    }
    if(l<n || r<m) cout<<"NO";
    else cout<<"YES";
}