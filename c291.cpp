#include<bits/stdc++.h>

using namespace std;
const int size = 50000;
int a[size] = {};
int b[size];
int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        b[i] = i;
    }
    
    return 0;
}