/*

given an arr like 1 2 1 3 2 7 4 2 total of n songs 
what is the longest sequence of successive songs where each song is unique
print the length of the longest sequence of unique songs


r fixed l variable 
1 2 1 3 2 7 4 2

enter 1 element (1)
enter 2nd elem   (1,2)
enter 3rd elem   (2 , 1) == first element is not enroll bz there is exist 
enter 4th ele   (3 , 1 , 2) == ""
enter 5th elemn (2,3 ,1) == second element is not enrol bz there is exist
enter 6th elem  (7,2,3,1) 
enter 7th elem  (4,7,2,3,1) max elemten
enter 8th elem (2,4,7)   5th element is not enroll 
1 2 1 3 2 7 4 2
1
2 1
1 2
3 1 2
2 3 1
7 2 3 1
4 7 2 3 1  (max unique numbers)
2 4 7 
problem link :: https://cses.fi/problemset/task/1141
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int>myqueue;
    for(int i =0;i<n;i++) {
        int x;
        cin>>x;
        myqueue.push(x);
    }
    queue<int>window;
    map<int,int>cnt;
    int ans =0;
    for(int i =0;i<n;i++){
        int x = myqueue.front();
        myqueue.pop();
        if(cnt[x] ==1){
            while(cnt[x] ==1){
                int y = window.front();
                window.pop();
                cnt[y]--;
            }
        }
        cnt[x]+=1;
        window.push(x);
        ans = max(ans, (int)window.size());
    }
    cout<<ans<<endl;
} 