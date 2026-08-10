#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    for(int i =0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   int mx = INT_MIN;
    for(int i =0;i<5;i++){
        int sum =0;
        for(int j =i;j<5;j++){
            sum+=v[j];
        }
        mx = max(mx,sum);
    }
   cout<<mx<<endl;
}