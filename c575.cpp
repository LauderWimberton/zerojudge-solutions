#include <iostream>
#include <algorithm>
using namespace std;

int N, K, bs[50000], bot, top, mid;

bool ok(int di) {
	int cnt = 0, bnd, i = 0;
	while (1) {
		bnd = bs[i] + di, ++cnt;
		if (cnt > K){
			return false;
        }
		if (bs[N - 1] <= bnd){
			return true;
        }
		while (bs[i] <= bnd) {
			++i;
			if (i == N)
				return true;
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> K;

	for (int i = 0; i < N; ++i){
		cin >> bs[i];
    }

	sort(bs, bs + N);


	bot = 1;
    top = bs[N - 1] - bs[0] + 1;

	while (top - bot >= 1) {
		mid = (bot + top) >> 1;
		if (ok(mid)){
			top = mid;
        }
		else{
			bot = mid + 1;
        }
	}
	cout << top << '\n';
}