#include<bits/stdc++.h>

using namespace std;

const double W1 = 13.7,H1 = 5.0, A1 = 6.8;
const double W0 = 9.6,H0 = 1.8, A0 = 4.7;
const int N1 = 66;
const int N0 = 655;

int main (){
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        int G,A,H,W;
        scanf("%d%d%d%d",&G,&A,&H,&W);
        switch (G){
            case 1:
                int ans = W1*W + H1*H - A1*A + 66;
                printf("%.4f",ans);
                break;
            case 0:
                int ans = W0*W + H0*H - A0*A + 655;
                printf("%.4f",ans);
                break;
        }
    }
}