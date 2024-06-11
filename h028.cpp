#include<bits/stdc++.h>

using namespace std;

const int siz = 100001;

int pos[siz],hei[siz],dow[siz];

int n,l,amo = 0,maxi;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> l;

    pos[0] = hei[0] = 0;
    pos[n + 1] = hei[n + 1] = l;
    for(int x = 1;x<= n;x++){
        cin >> pos[x];
        dow[x] = x - 1;
    }
    for(int x = 1;x <= n;x++){
        cin >> hei[x];
    }

    for(int x = 1;x<= n;x++){
        if((pos[x] - hei[x] >= pos[dow[x]]) || (pos[x] + hei[x]<= pos[x + 1])){

            amo++;

            dow[x + 1] = dow[x];

            maxi = max(maxi,hei[x]);

            while(true){
                if(dow[x + 1]>0 && pos[dow[x + 1]] + hei[dow[x + 1]]<= pos[x + 1]){
                    amo++;
                    maxi = max(maxi,hei[dow[x + 1]]);
                    dow[x + 1] = dow[dow[x + 1]];
                    
                }else{
                    break;
                }
            }
        }
    }
    if(amo == 0){
        cout << 0 << "\n" << 0;
    }else{
        cout << amo << "\n" << maxi;
    }
}