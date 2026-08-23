 

#include <bits/stdc++.h>
using namespace std;
void findBound(vector<int> &arr, int x)
{
    int l = 0;
    int r = arr.size();
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else if (arr[mid] >= x)
        {
            r = mid;
        }
    }
    int lower = l;
    // upper
    l = 0;
    r = arr.size();
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] <= x)
            l = mid + 1;
        else
            r = mid;
    }
    int upper = l - 1;
    cout << "[" << lower << " " << upper << " ]" << endl;
}
int main()
{

    vector<int> arr = {1, 3, 5, 5, 5,7, 67, 124};
    int x = 7;
    findBound(arr, x);
}

// simple code 
#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> arr = {1, 3, 5, 5, 5,7, 67, 124};
                    // 0 ,1  2  3  4 5  6   7
    int x ;

    cin>>x;
    int lowerBound = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
    int upperBound = upper_bound(arr.begin(),arr.end(),x) - arr.begin();
     if(lowerBound-upperBound) cout<<"[-1,-1]";
     else cout<<lowerBound<<" "<<upperBound-1;
}
int main(){
    int t;
    //  t =1;
    cin>>t;
    while(t--)
    solve();
   
}