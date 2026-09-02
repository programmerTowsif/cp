#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // connected[i][j] = 1 হলে i এবং j কোনো ছবিতে পাশাপাশি হয়েছে
    bool connected[51][51] = {};

    for (int i = 0; i < M; i++) {

        vector<int> a(N);

        // একটি ছবির মানুষগুলোর order input নেওয়া
        for (int j = 0; j < N; j++) {
            cin >> a[j];
        }

        // পাশাপাশি থাকা pair mark করা
        for (int j = 0; j < N - 1; j++) {

            int x = a[j];
            int y = a[j + 1];

            connected[x][y] = true;
            connected[y][x] = true;
        }
    }

    int ans = 0;

    // সব possible pair check করা
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {

            // কোনো ছবিতেই পাশাপাশি হয়নি
            // if (!connected[i][j]) {
            //     ans++;
            // }
            cout<<connected[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << ans << endl;

    return 0;
}