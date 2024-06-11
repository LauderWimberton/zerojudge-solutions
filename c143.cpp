#include<bits/stdc++.h>

using namespace std;
const int sizeX = 500,sizeY= 500;

bool g[sizeX][sizeY] = {};

int main(){
    int c,l,r;
    int trees = 0;
    scanf("%d%d",&c,&l);
    while(scanf("%d",&r) != EOF){
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",x1,y1,x2,y2);
        if(x1 > x2){
            swap(x1,x2);
        }
        if(y1 > y2){
            swap(y1,y2);
        }
        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                g[i][j] = 1;
                trees++;
            }
        }
    }
    cout << trees;

    return 0;
}