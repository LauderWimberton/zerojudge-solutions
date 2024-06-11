#include<iostream>

using namespace std;

const int siz = 30;
int y[siz];

int st, fin, N;

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> y[i];
    }
    cin >> st;
    st--;
    fin = st;

    if(y[st] - y[st+1] > y[st] - y[st-1]){
        while(y[fin] > y[fin + 1]){
            if(y[fin] < y[fin + 1] || fin == N-1){
                cout << fin + 1;
                break;
            }else{
                fin++;
            }
        }
    }else if(y[st] - y[st+1] < y[st] - y[st-1]){
        while(y[fin] > y[fin - 1]){
            if(y[fin] < y[fin - 1] || fin == 0){
                cout << fin + 1;
                break;
            }else{
                fin--;
            }
        }
    }
}