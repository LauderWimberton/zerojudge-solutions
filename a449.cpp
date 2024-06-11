#include <iostream>
#include <vector>
#include <climits>

using namespace std;
const int siz = 2001;

int n, k, m, tmp;
vector<int> dpc(siz, n+1), dpb(siz, INT_MAX);

int main() {
    
    while(cin >> n >> k >> m) {
        
        dpc[0] = 1;
        dpb[0] = 0;

        for(int i = 0; i < n; i++) {
            cin >> tmp;
            if(tmp > m) {
                continue;
            }
            for(int j = i; j >= 0; j--) {
                if(dpb[j] + tmp > m) {
                    if(dpc[j]+1 < dpc[j+1] || (dpc[j]+1 == dpc[j+1] && tmp < dpb[j+1])) {
                        if(dpc[j]+1 > k){
                            continue;
                        }
                        dpc[j+1] = dpc[j]+1;
                        dpb[j+1] = tmp;
                    }
                } else {
                    if(dpc[j] < dpc[j+1] || (dpc[j] == dpc[j+1] && dpb[j]+tmp < dpb[j+1])) {
                        dpc[j+1] = dpc[j];
                        dpb[j+1] = dpb[j]+tmp;
                    }
                }
            }
        }
        int i = n;
        while(dpc[i] == n+1) i--;
        cout << i;
    }
}