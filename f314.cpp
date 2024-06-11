#include<iostream>
#include<algorithm>

using namespace std;

const int msiz = 50;
const int nsiz = 10000;

int dp[nsiz + 1][msiz + 1], att[nsiz + 1], r, c, mxi = -2147483648;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> r >> c;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> att[j];
            dp[j][0] = att[j] + max(dp[j][0], max(dp[j][1],dp[j][2]));
            dp[j][1] = att[j] + max(dp[j - 1][0], dp[j - 1][1]);
        }
        for(int k = c; k >= 1; k--){
            dp[k][2] = att[k] + max(dp[k + 1][0], dp[k + 1][2]);
        }
    }

    for(int i = 1; i <= c; i++){
        mxi = max(mxi, max(dp[i][0], max(dp[i][1],dp[i][2])));
    }

    cout << mxi;

    
}