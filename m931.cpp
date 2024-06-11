#include <bits/stdc++.h>

using namespace std;

const int size = 20;
int atk[size];
int def[size];
int var[size];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int max = 0,sec = 0,n,temp;

    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> atk[i] >> def[i];
        var[i] = atk[i]*atk[i] + def[i]*def[i];

        if(var[i] > max){
            max = var[i];
            temp = i;
        }
    }
    var[temp] = 0;
    max = 0;
    temp = 0;

    for(int i = 0;i < n; i++){
        if(var[i] > max){
            max = var[i];
            temp = i;
        }
    }

    cout << atk[temp] << " " << def[temp];  
}