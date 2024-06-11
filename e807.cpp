#include<bits/stdc++.h>

using namespace std;
float r[7][4];

int main(){
    int max_day = 0, max_hour = 0;
    float temp_max = 0;
    for(int i =0;i < 7;i++){
        for(int j = 0;j < 4;j++){
            cin >> r[i][j];
        }
    }
    for(int i = 0;i < 7;i++){
        for(int j = 0;j < 4;j++){
            float temp = 0;
            temp += r[i][j];
            if(temp > temp_max){
                temp_max = temp;
                max_day = i + 1;
            }
        }
    }
    temp_max = 0;
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 7;j++){
            float temp = 0;
            temp += r[j][i];
            if(temp > temp_max){
                temp_max = temp;
                max_hour = i + 1;
            }
        }
    }
    cout << max_day << "\n";
    switch (max_hour){
        case 1:
            cout << "early morning";
            break;
        case 2:
            cout << "morning";
            break;
        case 3:
            cout << "afternoon";
            break;
        case 4:
            cout << "night";
            break;
            
    }
}