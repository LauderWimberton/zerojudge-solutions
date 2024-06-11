#include<iostream>
#include <iomanip>

using namespace std;

double mon, cost;
char des;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> mon >> cost >> des;

    switch(des){
        case 'T':
            
            mon /= 1.0;
            mon = mon - cost;
            if(mon < 0){
                cout << "No Money";
            }else if(mon <= 0.05 && mon >= 0){
                cout << des << " "<< "0.00";
            }else{
                cout << des << " "<< setprecision(2) << fixed << mon;
            }
            break;
        case 'U':
            
            mon /= 30.9;
            mon = mon - cost;
            if(mon < 0){
                cout << "No Money";
            }else if(mon <= 0.05 && mon >= 0){
                cout << des << " "<< "0.00";
            }else{
                cout << des << " "<< setprecision(2) << fixed << mon;
            }
            break;
        case 'J':
            
            mon /= 0.28;
            mon = mon - cost;
            if(mon < 0){
                cout << "No Money";
            }else if(mon <= 0.05 && mon >= 0){
                cout << des << " "<< "0.00";
            }else{
                cout << des << " " << setprecision(2) << fixed << mon;
            }
            break;
        case 'E':
            
            mon /= 34.5;
            mon = mon - cost;
            if(mon < 0){
                cout << "No Money";
            }else if(mon <= 0.05 && mon >= 0){
                cout << des << " " << "0.00";
            }else{
                cout << des << " " << setprecision(2) << fixed << mon;
            }
            break;
    }

}