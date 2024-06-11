#include<stdio.h>

int wei;

int main(){
    scanf("%d", &wei);

    if(wei > 50){
        printf("%d" , wei-1);
    }else{
        printf("%d" , wei);
    }
}