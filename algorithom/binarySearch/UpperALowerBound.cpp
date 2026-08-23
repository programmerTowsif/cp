/*
Value:   1  2  4  4  4  7  9
intdex:  0  1  2  3  4  5  6
x = 4
lowerBount(4) ==2
upperBound(4) == 5

*/

#include <bits/stdc++.h>
using namespace std;

void findBounc(vector<int> &arr, int target)
{
    int l = 0;
    int r = arr.size();

    while (l < r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] < target)
            l = mid + 1;
        else
            r = mid;
    }

   int lower = l  ;

   // upper 
   l = 0;
   r = arr.size();
   while(l<r){
    int mid = (l+r)/2;
    if(arr[mid] <= target) 
        l = mid+1;
    else r = mid;
   }
   int upper = l;
   cout<<"Upper "<<upper<<" lower "<<lower<<endl;
}

int main()
{
    vector<int> arr = {1, 2, 4, 4, 4, 7, 9};

    int target = 8;

    findBounc(arr, target);
}