#include<iostream>

using namespace std;

const int siz = 100000;

int port[siz + 1],n,m = 1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> port[i];
    }

    for (int i = 0; i < n; ++i){
        if (port[i] != -1){
            int cnt = 0, cur = i;
            while (port[cur] != -1){
                int tmp = cur;
                cnt++;
                cur = port[cur] - 1;
                port[tmp] = -1;
            }

            if (cnt > m){
                m = cnt;
            }
        }
    }

    cout << m << "\n";
    
}