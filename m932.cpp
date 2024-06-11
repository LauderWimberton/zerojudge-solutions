#include<iostream>

using namespace std;

const int size = 20;
char hive[size][size];

int main(){
    int m,n,k;
    cin >> m >> n >> k;
    for(int i = 0;i < m;i++){
        for (int j = 0; j < n;j++){
            cin >> hive[i][j];
        }
    }
    int s = m-1,l = 0;
    for(int i = 0; i < k;i++){
        int w;
        cin >> w;
        switch(w){
            //右上
            case 0:
                if(l+1 < n && s+1 < m){
                    l++;s++;
                    cout << hive[s][l];
                }else{
                    cout << hive[s][l];
                }
            //右
            case 1:

            //右下
            case 2:

            //左下
            case 3:

            //左
            case 4:

            //左上
            case 5:
        }
    }

}