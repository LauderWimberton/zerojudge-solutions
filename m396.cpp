#include<iostream>

using namespace std;

int T, tot, temp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> T;
    for(int i = 0;i < 4; i++){
        cin >> temp;
        tot += temp;
    }

    if(tot > T){
        cout << -1;
    }else{
        cout << tot;
    }
}