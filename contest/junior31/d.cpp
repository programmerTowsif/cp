 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    int n;
    cin>>n;
    vector<string>vS;
    int yeang_age = INT_MAX;
    int index ;
    for(int i =0;i<n;i++){
        string s;
        int a;
        cin>>s>>a;
        vS.push_back(s);
        if(yeang_age>a){
            yeang_age=a;
            index = i;
        }
    }
    for(int i = index;i<n;i++) cout<<vS[i]<<endl;
    for(int i =0;i<index;i++)cout<<vS[i]<<endl;
 }