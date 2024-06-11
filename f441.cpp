#include<bits/stdc++.h>

using namespace std;

const int size = 20;
int demo[size];
int sheet[size];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, S, st, sc;
    cin >> N >> S;

    for(int i = 0;i < N;i++){
        cin >> demo[i];
    }

    cin >> st;
    for(int i = 0;i < st;i++){
        int sheet[size] = {};
        sc = 0;
        for(int j = 0;j < N;j++){
            cin >> sheet[j];
            if(sheet[j] == demo[j]){
                sc += S;
            }
        }
        cout << sc << "\n";
    }

}