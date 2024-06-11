#include<bits/stdc++.h>

using namespace std;

const int size = 2000000;
int a[size];//先給他一個陣列備用

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);//io優化

    int N;
    cin >> N;//輸入

    for(int i = 0;i < N;i++){
        int x,y;
        cin >> x >> y;
        if(x > y) {
            a[i] = x;
        }else if(x < y){
            a[i] = y;
        }
    }//輸入pair太麻煩了 反正用不到小的 所以直接丟上去

    sort(a,a+N);//時間夠

    unsigned long long out = 0;

    for(int i = N-1;i >= 0;i--){
        if(a[i] <= 0){
            cout << out << "\n";
        }else{
            out += a[i];
            cout << out << "\n";
        }
    }
    //因為sort後是大到小 所以讓他漸減 然後因為他要所謂的最大值 所以我們在讀到的數小於0的時候就不加了 然後記得換行<3

}