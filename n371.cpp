//n371 隔山打牛
#include <bits/stdc++.h>

using namespace std;

const int size = 100000;
int h[size];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	while(m--) {
		int p;
		cin >> p;
		p = p-2;
		if(h[p] == -1) {
			cout << "我大意了啊~沒有閃\n";
		}else if(h[p] == n){
            cout << "來~ 騙";
        }else{
			cout << h[p] + 2 << "\n";
			int q = h[p];
			h[p] = h[q];
			h[q] = -1;
		}
	}
	return 0;
}
