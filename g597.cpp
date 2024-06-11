#include<iostream>
#include<algorithm>

using namespace std;

const int siz = 200005;
long long N, M, l, r, w, tmp;

long long ge[siz], re[siz];

long long ans;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> l >> r >> w;
        l--;
        r--;
        re[l] += w;
        re[r+1] -= w;
    }

    for(int i = 0; i < N; i++){
        re[i] += re[i-1];
    }

    for(int i = 0; i < N; i++){
        cin >> ge[i];
    }

    sort(ge, ge + N, cmp);
    sort(re, re + N);

    for(int i = 0; i < N; i++){
        tmp = re[i] * ge[i];
        ans += tmp;
    }

    cout << ans;

}