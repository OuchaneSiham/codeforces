// https://codeforces.com/problemset/problem/1292/A
// #include <stdio.h>
// lets use binary search:
// int cnt[N];
// bool no[2][N];
// int bad_colunms;
#include<bits/stdc++.h>
using namespace std;
// void toggle(int x, int y)
// {
//     if(no[x][y])
//     {
//         bad_colunms--;
//     }
//     else
//     {
//         bad_colunms++;
//     }
//     no[x][y] = !no[x][y];
// }
// what does pair do in c++? 
// it is a template class in STL in C++ that stores two values of different data types.
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    set<pair<int, int>> blocked;
    int bad_nei = 0;

    while (q--) {
        int r, c;
        cin >> r >> c;
        r--;

        for (int dc = -1; dc <= 1; dc++) {
            int nr = 1 - r;
            int nc = c + dc;

            if (nc >= 1 && nc <= n) {
                if (blocked.count({nr, nc})) {
                    bad_nei += (blocked.count({r, c}) ? -1 : 1);
                }
            }
        }

        if (blocked.count({r, c})) {
            blocked.erase({r, c});
        } else {
            blocked.insert({r, c});
        }

        cout << (bad_nei > 0 ? "No" : "Yes") << '\n';
    }

    return 0;
}
