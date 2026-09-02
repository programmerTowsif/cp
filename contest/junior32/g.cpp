 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
   int n , k;
   cin>>n>>k;
   vector<int>vs(n);
   for(int i=0;i<n;i++)cin>>vs[i];

   int l =0;
   int r = vs.size()-1;
   int ans =0;
   while(l<=r){

    if(vs[l]<=k) {
        vs[l] =0;
        l++;
        ans++;
    }
    else if(vs[r]<=k){
       r--;
       ans++;
    }
    else break;
   }
   cout<<ans<<endl;
 }