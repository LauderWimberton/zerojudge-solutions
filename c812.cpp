#include<bits/stdc++.h>

using namespace std;

const int siz = 5001;

map<int, vector <pair<int,int> > > spot;

int n, beg, p, gra[siz], I, J, Rij, m, ans;

void dfs(int n, int fin, int mini){
    for(pair<int,int> tmp: spot[n]){
        if(tmp.first == fin){
            continue;
        }else{
            gra[tmp.first] = min(tmp.second, mini);
            dfs(tmp.first,n,min(tmp.second, mini));
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> n >> beg >> p){
        spot.clear();
        ans = 0;
        m = 0;
        for(int i = 0;i < n-1; i++){
            cin >> I >> J >> Rij;
            if(Rij > m){
                m = Rij;
            }
            spot[I].push_back({J,Rij});
            spot[J].push_back({I,Rij});
        }

        dfs(beg, n+1, m);

        for(int i = 1;i <= n;i++){
            if(i == beg){
                continue;
            }
            if(gra[i] >= p){
                ans++;
            }
        }
        cout << ans << "\n";
    }

}