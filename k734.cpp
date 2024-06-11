#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, i, j, m, t, k;

int main() {
    cin >> n >> m >> k >> t;

    vector<int> key(t), deg(n, k);
    vector<bool> ope(m, false);

    for (i = 0; i < t; i++) {
        cin >> key[i];
        ope[key[i]] = true;
    }

    vector<vector<int>> box(m, vector<int>());
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            cin >> t;
            box[t].push_back(i);
        }
    }

    vector<vector<int>> req(n, vector<int>());
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            cin >> t;
            req[i].push_back(t);
        }
    }

    int ans = 0;
    while (!key.empty()) {
        int k = key.back();
        key.pop_back();
        for (int b : box[key]) {
            if (--deg[box] == 0) {
                ans++;
                for (int p : req[box]) {
                    if (!ope[p]) {
                        key.push_back(p);
                        ope[p] = true;
                    }
                }
            }
        }
    }

    cout << ans;
}
