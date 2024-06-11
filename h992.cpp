#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;

long long fib(long long x){
    if(x<=1)
        return x;
    else
        return fib(x-1)+fib(x-2);
}

long long bin(long long x, long long k) {
    long long a = 1;
    while(k) {
        if(k&1) a =a * x % MOD;
        x = x * x % MOD;
        k >>= 1;
    }
    return a;
}

int main(){
    long long N;
    cin >> N;
    for(long long i = 0; i < N; i++){
        long long a,b;
        cin >> a >> b;
        a = fib(a);
        b = fib(b);

        cout << bin(a,b);
    }
}