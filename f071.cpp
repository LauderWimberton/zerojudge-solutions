#include<bits/stdc++.h>

using namespace std;
int luc[3];

const int size = 5;

int num[size];
int mon[size];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x = 0;
    long long pri = 0;

    for(int i = 0; i < 3; i++){
        cin >> luc[i];
    }
    for(int i = 0;i < size;i++){
        cin >> num[i];
    }
    for(int i = 0;i < size;i++){
        cin >> mon[i];
    }

    for(int i = 0;i < size; i++){
        if(num[i] == luc[0] || num[i] == luc[1]){
            pri += mon[i];
        }else if(num[i] == luc[2]){
            pri -= mon[i];
            x++;
        }
    }

    if(pri < 0){
        pri = 0;
    }

    if(x == 0){
        pri *= 2;
    }
    cout << pri;

}