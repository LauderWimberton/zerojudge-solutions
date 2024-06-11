#include<iostream>

using namespace std;

int n,sum;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for(int i = 1;i <= n;i++){
        if(i%2){
            sum += i;
        }
    }

    cout << sum;
}