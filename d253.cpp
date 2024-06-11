#include<iostream>

using namespace std;

const int val[5] = {1, 5, 10, 25, 50};
const int siz = 7489;

int mon, ans[siz + 1];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ans[0] = 1;

    for(int i = 0;i < 5;i++){
        for(int j = val[i]; j <= siz;j++){
            ans[j] += ans[j-val[i]];
        }
    }

    while(cin >> mon){
        cout << ans[mon] << "\n";
    }
}