#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {

int n;
    while(cin>>n){
        int num[n],t=n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    for(int i=0;i<n;i++){
        for(int i=0;i<t;i++)
            cout<<num[i]<<" ";
                cout<<"\n";
for(int i=0;i<t-1;i++)
num[i]=num[i+1];
for(int i=0;i<t/2;i++){
int change;
change=num[i];
num[i]=num[t-2-i];
num[t-2-i]=change;
}
t--;
}
}
return 0;
}