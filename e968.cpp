#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N,s1,s2,s3;
    cin >> N >> s1 >> s2 >> s3;
    for(int i = N;i > 0;i--){
        if(i != s1 && i != s2&& i != s3){
            cout << "No. " << i << "\n";
        }
    }
}