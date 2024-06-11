#include<bits/stdc++.h>

using namespace std;

const int mod = 10007;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b;

    while(cin>>a>>b){
        a%=mod;
        long long sum=1;
        for(int i=0;i<mod;i++){
            sum *= a;
            sum %= mod;
        }
        
        int sum1=1;
        
        for(int i=0;i<b/mod;i++){
            sum1 *= sum;
            sum1 %= mod;
        }
        
        for(int i=0;i<b%mod;i++){
            sum1 *= a;
            sum1 %= mod;
        }
        
        cout<<sum1<<endl;

    }
    return 0;
}