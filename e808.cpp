#include<bits/stdc++.h>

using namespace std;
const int size = 720;
int t[size];
int main(){
    int stops,st_hr,st_mi,at;
    cin >> stops >> st_hr >> st_mi;
    for(int i = 0;i < stops;i++){
        cin >> t[i];
        t[i] = t[i]+t[i-1];
    }
    while(cin >> at){
        if(at == 0){
            break;
        }
        st_mi = st_mi + t[at];
        if(st_mi >= 60){
            st_hr = st_hr + (st_mi/60);
            st_mi = st_mi%60;
        }
        cout << st_hr << ":" << st_mi << "\n";
    }
    return 0;
}