#include<iostream>

using namespace std;

const int siz = 1000000;

int c[siz], tmp, h, i;

long long ans;

void dfs(int n){
    int m = (n%2) + 2, forw;
    for(int i = 0;i < m;i++){
        forw = c[h];
        h++;
        if(!forw){
            continue;
        }
        ans = ans + abs(n - forw);

        dfs(forw);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> tmp){
        c[i] = tmp;
        i++;
    }

    for(int j = 0;j <= i;j++){
        dfs(c[j]);
    }

    cout << ans;
}