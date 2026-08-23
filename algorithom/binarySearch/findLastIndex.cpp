/*

upper_bound
1,2,2,3,4,7,7,20,30,31
upper_bound  of 7 in this vector 7 ( 20 )
nexVec = {1,7 , 7}
upperbound of 7 in newVec = 3 out of array
newVec = {1,2,4,8,9}
upper bound of 7 in newVec = 3 (8)
newVec = 1,2,4,6
upper bound 7 in newVec = 4 out of array

*/

// printing last index
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 7, 7,7,20, 30, 31};
//     int t = 7;

//     int l = 0;
//     int r = vec.size() - 1;
//     int ans = -1;

//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;

//         if (vec[mid] == t)
//         {
//             ans = mid;      // current index is a possible answer
//             l = mid + 1;    // go right to find a later occurrence
//         }
//         else if (vec[mid] > t)
//         {
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }

//     cout << ans << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     vector<int> vec ={ 1 ,3 ,7 , 7,8};
//                     //{1, 2, 2, 3, 4, 7, 7, 20, 30, 31};
//                     // 0 ,1  2  3  4  5  6  7   8    9
//     int x;
//     cin >> x;
//     int n = vec.size();
//     cout << n << endl;
//     int left = 0, right = n - 1;

//     while (left < right)
//     {
//         int mid = (left + right) / 2;
//         cout << "left" << left << " " << "mid" << mid << " " << "right" << right << endl;
//         if (vec[mid] > x)
//         {
//             right = mid - 1;
//         }
//         else if (vec[mid] <= x)
//             left = mid;
//     }
//     cout << left << " " << right << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     vector<int> vec = {1, 3, 7, 7, 8};
//                     // 0  1  2  3  4
//     //{1, 2, 2, 3, 4, 7, 7, 20, 30, 31};
//     // 0 ,1  2  3  4  5  6  7   8    9
//     int x;
//     cin >> x;
//     int n = vec.size();
//     cout << n << endl;
//     int left = 0, right = n - 1;

//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         cout << "left" << left << " " << "mid" << mid << " " << "right" << right << endl;

//         if (vec[mid] <= x)
//         {
//             cout << left << " " << right << endl;
//             left = mid + 1;
//         }

//         else
//         {
//             right = mid - 1;
//         }
//     }
//     cout << right;
// }


  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int x;
    cin>>x;
    vector<int>v= {1,2 ,3,7,7,7,8,9};
    int l =0 , r = v.size();
    while(l<r){
        int mid = (l+r)/2;
        if(v[mid]<=x) l = mid+1;
        else if(v[mid]>x) r = mid;
    }
    cout<<l<<" "<<r<<" "<<v[l]<<endl;
  }