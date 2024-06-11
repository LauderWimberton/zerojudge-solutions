#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int pri,pri_t,pri_c;
    cin >> pri;
    pri_t = pri - 200 * (pri/2000);
    pri_c = pri - 100 * (pri/1000);

    if(pri_t < pri_c){
        cout << pri_t << " " << 0;
    }else if(pri_t > pri_c){
        cout << pri_c << " " << 1;
    }else if(pri_t == pri_c){
        cout << pri_t << " " << 0;
    }

}