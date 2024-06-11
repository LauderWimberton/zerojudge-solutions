#include <bits/stdc++.h>

using namespace std;

const int siz = 100000;

int p[siz], w[siz*2], x[siz*2], y[siz*2], d[siz*2];
long long ans;

int findpr(int x) { 
    return x == p[x] ? x : p[x] = findpr(p[x]); 
    }

int n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while (cin >> n >> m) {

        ans = 0;

        for (int i=0; i<n; i++){
            p[i] = i;
        }
        for (int i=0; i<m; i++){
            d[i] = i;
            cin >> x[i] >> y[i] >> w[i];
        }
        sort(d, d+m, [](int a, int b) { return w[a] < w[b]; });

        n--;
        
        for (int i=0; i<m && n; i++) {
            int tmp = findpr(x[d[i]]), y2 = findpr(y[d[i]]);
            if (tmp != y2){
                p[tmp] = y2, ans += w[d[i]], n--;
            }
        }
        if(!n){
            cout << ans << '\n';
        }else{
            cout << -1 << '\n';
        }
    }
}