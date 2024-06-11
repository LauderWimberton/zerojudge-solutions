#include<iostream>

using namespace std;

const int siz = 200000;
int N, a[siz],b[siz];

int main(){

    cin >> N;

    for(int i = 0;i < N;i++){
        cin >> a[i];
    }

    for(int i = 0;i < N;i++){
        cout << a[i] - a[i-1] << " ";
    }

}