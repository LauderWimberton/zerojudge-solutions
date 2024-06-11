#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0); 
    vector<vector<char>> v; 
    bool t[123]={0};    //統計用陣列 (輸出第二行時用的到)
    int m,n,k,d;        //m,n,k為題目敘述 d代表的是input最後一行的整數
    string s;
    cin>>m>>n>>k;
    int nowx=m-1,nowy=0,cnt=0;      //nowx,nowy記錄現在位置的x和y cnt記錄種類
    v.resize(m,vector<char>(n));    //動態開記憶體
    for(int i=0;i<m;i++){           //把string丟進char陣列裡
        cin>>s;
        for(int j=0;j<n;j++){
            v[i][j]=s[j];
        }
    }
                              
    for(int i=0;i<k;i++){    //先判斷現在往哪個方向 再判斷if(沒超過邊界)就更新現在位置;
        cin>>d;
        if(d==0){
            if((nowx-1)>=0) nowx--; 
        }
        else if(d==1){
            if((nowy+1)<n) nowy++;
        }
        else if(d==2){
            if((nowx+1)<m&&(nowy+1)<n) nowx++,nowy++;
        }
        else if(d==3){
            if((nowx+1)<m) nowx++;
        }
        else if(d==4){
            if((nowy-1)>=0) nowy--;
        }
        else if(d==5){
            if((nowx-1)>=0&&(nowy-1)>=0) nowx--,nowy--;
        }
        cout<<v[nowx][nowy]; 
        t[(int)(v[nowx][nowy])]=1;     //這邊使用ASCII 轉成int 丟到陣列
    }
    
    for(int i='A';i<='Z';i++){         //跑陣列 統計多少種類
        if(t[i]==1) cnt++;        
    }
    for(int i='a';i<='z';i++){
        if(t[i]==1) cnt++;        
    }
    cout<<"\n"<<cnt;
}