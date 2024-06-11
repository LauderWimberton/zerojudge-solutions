#include<iostream>

using namespace std;

const int siz = 2000;

int N, hei[siz], wei[siz], mini = 2147483647,num;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N;

    for(int i = 0;i < N;i++){
        cin >> wei[i];
    }
    for(int i = 0;i < N;i++){
        cin >> hei[i];
    }

    for(int i = 0;i < N;i++){
        if(hei[i] * wei[i] < mini){
            mini = hei[i] * wei[i];
            num = i;
        }
    }

    cout << wei[num] << " " << hei[num];
}