 #include<bits/stdc++.h>
 using namespace std;
 void solve() {
    int rL,cL;
    cin>>rL>>cL;
     vector<string>sV;
     string s = "snuke";  
    for(int i =0;i<rL;i++){
        string x;
        cin>>x;
        sV.push_back(x);
    }
   string diagonalString;
    for(int i =0;i<rL;i++){
        bool found = false;
        for(int j=0;j<cL;j++){
             if(sV[i ][j] != diagonalString[j]){
                
             }
        }
        cout<<endl;
    }
    if(s.find(diagonalString) != string::npos) {
        cout<<"YES";
    }else cout<<"NO";
 }
 int main(){
    int t =1;
    // cin>>t;
   
    while(t--)
    solve();
 }