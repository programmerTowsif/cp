/*
 2 string s , p
  1st string  ===> abaacab
  2nd string ===> baac
  check 1st string is a anagram of 2nd string 
   
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s , p ;
    cin>>s>>p;
    int sIs = s.size();
    int Sp = p.size();
    map<char,int>AnP;
     deque<char>d;
     map<char,int>DS;
    for(int i =0;i<Sp;i++){
        AnP[p[i]]++;
        DS[s[i]]++;
         d.push_back(s[i]);
    }
     
    int ans =0;
    if(AnP == DS) {
     ans=1;
    }
    else{
    for(int i=0;i<sIs-Sp;i++){
        char x =  d.front();
        d.pop_front();
        d.push_back(s[i+Sp]);
        DS[x]--;
        DS[s[i+Sp]]++;
        if(AnP == DS) {
         ans=1;
         break;
    }
    }
    }
    cout<<ans<<endl;
}