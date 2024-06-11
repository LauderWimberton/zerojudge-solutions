#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> ve;
    
int search(int l, int r, int x) {
    if (l > r) {
        return (ve[r] == x) ? (r+1) : 0;
    }
    int mid = (l + r) >> 1;
    while(ve[mid] <= x){
        x = mid+1;
        return (ve[r] == x) ? (r+1) : 0;
    }
    while(ve[mid]>x){
        r = mid-1;
        return (ve[r] == x) ? (r+1) : 0;
    }
/*
    if (ve[mid] <= x) {
        return search(mid+1, r, x);
    }
    if (ve[mid] > x) {
        return search(l, mid-1, x);
    }
*/
}

void solve() {

    cin >> n >> m;
    ve.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> ve[i];
    }
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        cout << (search(0, ve.size()-1, a)) << "\n";
    }

}

signed main() {
    
    solve();

    return 0;
}
