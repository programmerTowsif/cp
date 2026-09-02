 #include<bits/stdc++.h>
 using namespace std;
  
 int main(){
    char p,q;cin>>p>>q;
    int arr[] = {0,3,4,8,9,14,23};
    cout<<abs(arr[p-'A'] - arr[q-'A'])<<endl;
 }