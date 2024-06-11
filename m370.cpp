#include<iostream>
#include<algorithm>

using namespace std;

const int siz = 20;
int f[siz];

int x, n, le, ri, amo;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> x >> n;
    for(int i = 0; i < n;i++){
        cin >> f[i];
        if(f[i] > x){
            ri++;
        }else if(f[i] < x){
            le++;
        }
    }

    sort(f,f+n);

    if(ri > le){
        cout << ri << " " << f[n-1];
    }else if(le > ri){
        cout << le << " " << f[0];
    }
}