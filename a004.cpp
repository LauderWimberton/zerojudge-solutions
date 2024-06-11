#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int year;

    while(cin >> year){
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            cout << "閏年" << "\n";
        }else{
            cout << "平年" << "\n";
        }
    }
}