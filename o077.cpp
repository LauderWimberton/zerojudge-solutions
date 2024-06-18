#include<stdio.h>

using namespace std;

const int siz = 20;
int pap[siz][siz];

int H, W, N, r, c, t, x;

int abs(int x, int y){
    if(x - y < 0){
        return (x - y) * -1;
    }else{
        return x - y;
    }
}

int main(){

    scanf("%d%d%d", &H, &W, &N);

    for(int i = 0; i < N; i ++){
        scanf("%d%d%d%d" , &r, &c, &t, &x);


        for(int i = 0; i < H; i ++){
            for(int j = 0; j < W; j ++){
                if(i + j >= r + c - t && i + j <= r + c + t && i <= r + t && i >= r - t && j <= c + t && j >= c - t && abs(i, r) + abs(j, c) <= t){
                    pap[i][j] += x;
                }
            }
        }
    }


    for(int i = 0; i < H; i ++){
        for(int j = 0; j < W; j++){
            printf("%d ", pap[i][j]);
        }
        printf("\n");
    }
}