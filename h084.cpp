#include<iostream>
#include<algorithm>

using namespace std;

const int h_siz = 200000;
const int w_siz = 50000;
 
int n, k, h[h_siz + 1], w[w_siz + 1];
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    int l = 1, r = 0;
    for (int i = 1; i <= n; i++){
        cin >> h[i];
        r = max(r, h[i]);
    }
    r++;
    for (int i = 1; i <= k; i++){
        cin >> w[i];
    }
    while (r-l > 1){
        int mid = (l+r)/2;
        int cnt = 0, pre = 1;
        bool check = false;
       for (int i = 1; i <= n; i++) {
            if (h[i] < mid) {
            cnt = 0;
            continue;
            }

        cnt++;
            if (cnt >= w[pre]) {
                cnt -= w[pre];
                if (pre == k) {
                    check = true;
                    break;
                }
                pre++;
            }
    }


        if(check){
            l = mid;
        }else{
            r = mid;
        }

    }
    cout << l;
}