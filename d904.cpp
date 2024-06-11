#include<iostream>
#include<algorithm>

using namespace std;

const int csiz = 1000;

int mi[csiz + 1];
int C, N, tmp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(cin >> C >> N){
        for(int i = 1; i <= C; i++){
            mi[i] = 1000;
        }

        for(int i = 0; i < N;i++){
            cin >> tmp;
            for(int j = tmp; j <= C;j++){
                if(mi[j] > mi[j - tmp] + 1){
                    mi[j] = mi[j - tmp] + 1;
                }
            }
        }
        cout << mi[C];
    }
}