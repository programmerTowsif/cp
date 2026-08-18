/*
 ther are n input in array (1 1 2 3 4 7 7 20 30 31)
                         m = l+r/2  , find = 3
                            l = 0 , r = 9;
                        m = 0+9/2 = 4
                        l = 0 , r = 4;
                        m  = 0+4/2 =2
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 7, 7, 20, 30, 31};
    int t = 3;

    int l = 0;
    int r = vec.size() - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (vec[mid] == t)
        {
            cout << mid;
            return 0;
        }
        else if (vec[mid] > t)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}