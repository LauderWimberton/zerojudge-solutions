#include <iostream>
#include <vector>

using namespace std;

const int siz = 100001;
 
vector <int> gr[siz];

int n, m, x, y, wb[siz], col[2], ans;
 
bool bfs(int k, int c){
    wb[k] = c;
    col[c]++;
    int ret = 1;
    for (auto i:gr[k]){
        if (wb[i] == wb[k]){
            return 0;
        }else if (wb[i] == -1){
            ret &= bfs(i, c^1);
        }
    }
    return ret;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    fill(wb, wb + sizeof(wb) / sizeof(wb[1]), -1);

    for (int i = 0; i < m; i++){
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }

    for (int i = 1; i <= n; i++){
        if (wb[i] == -1){
            col[0] = 0;
            col[1] = 0;
            if (!bfs(i, 0)){
                cout << 0 ;
                return 0;
            }
            ans += min(col[0], col[1]);
        }
    }
    cout << ans;
}