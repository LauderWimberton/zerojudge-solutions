#include<bits/stdc++.h>

using namespace std;

const int size = 10000;
int a[size];

int main(){
    int N,B,temp;
    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> a[i];
    }
    B = a[N-1];
    for(int i = 1;i <= N;i++){
        if(i % B == 1){
            temp += a[i-1];
        }
    }
    temp = temp % N;
    if(temp != 0){
        cout << temp << " "<< a[temp-1];
    }else if(temp == 0){
        cout << N << " " << a[N-1];
    } 
}