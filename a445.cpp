#include<iostream>
#include<algorithm>

using namespace std;

const int siz =  10000;
int peo[siz];

int N, M, Q, a, b;

int main(){
    cin >> N >> M >> Q;

    for(int i = 0;i < N; i++){
        peo[i] = -1;
    }

    for(int i = 0;i < M; i++){
        cin >> a >> b;
        while(peo[a] >= 0){
            a = peo[a];
        }
        while(peo[b] >= 0){
            b = peo[b];
        }

        if(a != b){
            if(peo[a] > peo[b]){
                swap(a,b);
            }
            peo[a] += peo[b];
            peo[b] = a;
        }
    }

    for(int i = 0; i < Q; i++){
        cin >> a >> b;
        if(peo[a] == peo[b]){
            cout << ":)" << "\n";
        }else{
            cout << ":(" << "\n";
        }

    }
}
