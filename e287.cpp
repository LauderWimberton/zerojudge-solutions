#include<iostream>
#include<algorithm>

using namespace std;

const int siz = 100;

int p[siz][siz],n,m,sty,stx,mini = 1000001;

bool path[siz][siz];

long long ans;

int main(){
    cin >> n >> m;

    for(int i = 0; i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> p[i][j];
            if(p[i][j] < mini){
                mini = p[i][j];
                sty = i;
                stx = j;
            }
        }
    }

}