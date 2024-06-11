#include<bits/stdc++.h>

using namespace std;

const int SI = 18;

int village[SI];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N,ki,wol = 0;
    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> village[i];
    }

    while(cin >> ki){
        ki--;
        if(village[ki] == 2){
            cout << "Wrong";
            return 0;
        }else{
            village[ki] = 2;
        }
    }

    for(int i = 0;i < N;i++){
        if(village[i] == -1){
            wol++;
        }
    }
    if(wol == 0){
        cout << "Townsfolk";
    }else{
        cout << "Werewolves";
    }

}