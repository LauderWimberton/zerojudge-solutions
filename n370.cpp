#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;
int N, K;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N >> K;

    vector<int> ladd(N + 1), dp(N + 1);

    for (int i = 1; i <= N; i++){
        ladd[i] = i;
    }
    while (K--) {
        int a, b;
        cin >> a >> b;
        ladd[a] = b;
    }

    dp[1] = 1;

    for (int i = 1; i < N; i++) {
        for (int j = 1; j <= 6; j++) {
            int next = min(i + j, N);
            dp[ladd[next]] = (dp[ladd[next]] + dp[i]) % MOD;
        }
    }
    cout << dp[N];
}
