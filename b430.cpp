#include<iostream>

using namespace std;

int mult(int a,int b,int mod){
    int ans = 0;
    a %= mod;
    b %= mod;
    while(b){
        if(b & 1){
            ans = a + ans % mod;
        }
        b = b >> 1;
        
    }

}

int main(){

        
}