#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;

	cin >> n >> m;

	vector<int> h(n + 1);

	iota(h.begin(), h.end(), 1);
	
	while(m--) {
		int p;
		cin >> p;
		p--;
		if(h[p] == -1 || h[p] == n) {
			cout << "0u0 ...... ?\n";
		} else {
			cout << h[p] + 1 << "\n";
			int q = h[p];
			h[p] = h[q];
			h[q] = -1;
		}
	}
	return 0;
}