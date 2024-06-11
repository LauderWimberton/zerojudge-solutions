    #include<iostream>

    using namespace std;

    int n,m;

    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        cin >> n >> m;

        m *= 8;
        if(m < n*2){
            cout << "Not enough";
        }else if(m > n*3){
            cout << "Too much";
        }else if(m % 2 == 0 || m % 3 == 0 || m % 6 == 0){
            cout << "Yes";
        }

    }