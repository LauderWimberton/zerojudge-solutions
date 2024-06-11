#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ant, gh ,sumA = 0,sumG = 0;
    cin >> ant >> gh;

    for(int i = 0;i < ant;i++){
        int a = 0;
        cin >> a;
        sumA += a;
    }

    for(int i = 0;i < gh;i++){
        int g = 0;
        cin >> g;
        sumG += g;
    }

    if(ant > gh && sumA > sumG){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}