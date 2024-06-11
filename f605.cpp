#include<bits/stdc++.h>

using namespace std;

const int siz = 3;

int a[siz],n,d,sum,buy;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> d;
    for(int i = 0; i < n; i++){
        for(int j = 0;j < siz;j++){
            cin >> a[j];
        }
        sort(a,a+siz);

        if(a[2] - a[0] >= d){
            sum += (a[0] + a[1] + a[2])/3;
            buy++;
        }
    }

    cout << buy << " " << sum;

}