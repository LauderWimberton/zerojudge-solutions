#include<iostream>
#include<algorithm>

using namespace std;

const int siz = 10000;
const int sto = 100;
int feed[siz];

int n, a, b, pre, ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;

        for(int i = sto; i >= a; i--){
            feed[i] = max(feed[i], feed[i-a] + b);
        }
    }
    for(int i = 0; i <= sto; i++){
        ans = max(ans, feed[i]);
    }

    cout << ans;
}