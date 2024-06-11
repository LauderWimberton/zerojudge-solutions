#include<bits/stdc++.h>
using namespace std;

const int siz = 1001;

vector<int> topo[siz];
int N, M, a, b, off[siz], ans[siz], tmp;
int dfs(int n){
    off[n] = -1;
    for(int x : topo[n]){
        if(off[x] == -1 || (!off[x] && !dfs(x))){
            return 0;
        }
    }
    ans[--tmp] = n;
    off[n] = 2;
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    memset(off, 0, sizeof(off));
    cin >> N >> M;
    tmp = N;
    while(M--){
        cin >> a >> b;
        topo[a].emplace_back(b);
    }
    for(int i = 1;i <= N;i++){
        if(!off[i] && dfs(i) == 0){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES" << "\n";
    for(int i = 0; i < N;i++){
        cout << ans[i] << "\n";
    }

}
