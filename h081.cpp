#include<iostream>

using namespace std;

const int siz = 100;

int a[siz], x, n, D, earn = 0;
bool buy = 0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> D;

    for(int i = 0;i < n;i++){   
        cin >> a[i];
    }

    x = a[0];
    buy = true;

    for(int i = 0;i < n;i++){
        if(buy && a[i] >= x + D){
            earn += (a[i] - x);
            x = a[i];
            buy = false;
        }else if(!buy && a[i] < x - D){
            x = a[i];
            buy = true;
        }
    }

    cout << earn;
}
