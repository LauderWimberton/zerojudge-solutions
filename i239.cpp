#include <iostream>
#include <vector>

using namespace std;

int mex(vector<int>& nums) {
    int n = nums.size();
    vector<bool> present(n + 1, false); 
    for (int num : nums) {
        if (num >= 0 && num <= n) {
            present[num] = true;
        }
    }
    for (int i = 0; i <= n; ++i) {
        if (!present[i]) {
            return i;
        }
    }
    return n + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        vector<int> sub(a.begin() + l - 1, a.begin() + r);
        cout << mex(sub) << endl;
    }

    return 0;
}
