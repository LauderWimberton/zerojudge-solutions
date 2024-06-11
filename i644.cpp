#include <cstdio>

const int N = 8;

bool x[N][N], y[N], pos[(N<<1)-1], neg[(N<<1)-1];

void print() {
    for(int i=0; i<N; ++i) {
        for(int j=0; j<N; ++j) printf(x[i][j] ? "Q" : ".");
        printf("\n");
    }
    printf("\n");
}

void queen(int row) {

    if(row==N) {
        print();
        return; 
    }

    for(int i=0; i<N; ++i)
        if(y[i] && pos[row+i] && neg[row-i+N-1]) {
            y[i] = pos[row+i] = neg[row-i+N-1] = 0;
            x[row][i] = 1;
            queen(row+1);   // 遞迴
            x[row][i] = 0;
            y[i] = pos[row+i] = neg[row-i+N-1] = 1;
        }

}

int main() {

    // init
    for(int i=0; i<N; ++i) y[i] = 1;
    for(int i=0; i<(N<<1)-1; ++i) pos[i] = neg[i] = 1;

    queen(0);

}