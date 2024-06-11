    #include<iostream>
    #include<algorithm>

    using namespace std;

    const int siz = 2000;

    int b, num, pri, tmp;
    int bk[siz];

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        
        cin >> b;
        for(int i = 0;i < b;i++){
            cin >> num >> tmp;
            if(tmp > 100){
                bk[i] = num;
                pri += (tmp - 100)*5;
            }
        }

        sort(bk,bk+b);

        for(int i = 0;i < b;i++){
            if(bk[i]){
                cout << bk[i] << " ";
            }
        }
        cout << "\n" << pri;
    }