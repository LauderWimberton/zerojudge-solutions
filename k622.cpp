#include <iostream>
#include <vector>

using namespace std;

int n, K;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> K;

    vector<int> W(n), C(n);

    for (int i = 0; i < n; i++) {
        cin >> W[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> C[i];
    }

    vector<int> ans(K+1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = K; j >= W[i]; j--) {
            ans[j] = max(ans[j], ans[j - W[i]] + C[i]);
        }
    }

    cout << ans[K];
}