#include <iostream>

using namespace std;

const int siz = 25;

int a[siz + 5],N,b,f;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    int st = 35, ed = 35, bran = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i] == 1 && bran != 1) {
            st = i;
            bran = 1;
        }
        if (a[i] == 1) {
            ed = i;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; ++i) {
        if (i >= st && i <= ed) {
            if (i == 0 || i == N - 1) {
                continue;
            } else if (i != N - 1) {
                if (a[i] == 0 && a[i - 1] != 9 && a[i + 1] != 9) {
                    ans += 1;
                }
            }
        }
    }
    cout << ans;
    return 0;
}
