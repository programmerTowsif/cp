 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    while(true){

        bool done = true;
        for(int i =0;i<(int)a.size()-1;i++){
             if(abs(a[i]-a[i+1]) != 1)
             {
                done = false;
                vector<int>b;
                for(int j=0;j<=i;j++) 
                 b.push_back(a[j]);
                 if(a[i]<a[i+1]){
                    for(int x = a[i]+1;x<a[i+1];x++)
                    b.push_back(x);
                 }
                 else {
                    for(int x = a[i]-1;x>a[i+1];x--)
                    b.push_back(x);
                 }
                 
             }
        }
    }
 }