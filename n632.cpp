#include <iostream>

using namespace std;

const int siz = 1000;

int R[siz + 1] = {0};
int K, N, t, pop = -1, pop_sell, bad, bad_sell = 2147483647;

int main(){
    ios::sync_with_stdio(false);    
    cin.tie(0);
    cout.tie(0);

    cin >> K >> N;
    int M[N], sum[N];

    for (int i = 0; i < K; i++){
        cin >> t;
        R[t]++;
    }

    for (int i = 0; i < siz+1; i++){
        if (R[i] > pop_sell){
            pop_sell = R[i];
            pop = i;
        }
    }
    for (int i = 0; i < N; i++){
        cin >> M[i];
    }

    for (int i = 0; i < N; i++){
        sum[i] = 0;
        for (int j = 0; j < M[i]; j++){
            cin >> t;
            sum[i] += R[t];
        }
        if (sum[i] <= bad_sell){
            bad_sell = sum[i];
            bad = i + 1;
        }
    }

    cout << pop << " " << bad;
}