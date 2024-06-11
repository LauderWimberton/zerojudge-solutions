#include<iostream>

using namespace std;

const int siz = 100;

int f[siz][siz];
int N;

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> f[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(f[i][j] == 9){
                break;
            }

            
        }
    }


}