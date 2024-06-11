#include<iostream>
#include<vector>

using namespace std;

int n, m, k, sum, x, num;

vector<int> r;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0;i < n;i++){
        cin >> k;
        sum += k;
        r.push_back(sum);
    }

    for(int i = 0;i < m;i++){
        cin >> x;
        if(num != 0){
            x += r[num-1];
        }
        while(x > sum){
            x -= sum;
        }
        num = lower_bound(r.begin(),r.end(),x)-r.begin();

        num %= n;
    }
    cout << num-1;
}

