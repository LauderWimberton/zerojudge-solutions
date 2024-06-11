#include<iostream>

using namespace std;

const int corn_soup = 55;
const int apple_pie = 32;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int money,time,food,now = 0;
    cin >> money >> time >> food;
    
    while(money > 0){
        switch (food){
            case 0:
                money -= apple_pie;
                if(money < 0){
                    cout << "Wayne can’t eat and drink." << "\n";
                    break;
                }else if(money == 0){
                    cout << now << ": Wayne eats a Apple pie, and now he doesn’t have money." << "\n";
                    break;
                }else{
                    cout << now << ": Wayne eats an Apple pie, and now he has" << money <<"dollars." << "\n";
                    food = 1;
                    now += time;
                    break;
                }
            case 1:
                money -= corn_soup;
                if(money < 0){
                    cout << "Wayne can’t eat and drink.";
                    break;
                }else if(money == 0){
                    cout << now << ": Wayne drinks a Corn soup, and now he doesn’t have money." << "\n";
                    break;
                }else{
                    cout << now << ": Wayne drinks a Corn soup, and now he has" << money <<"dollars." << "\n";
                    food = 0;
                    now += time;
                    break;
                }
        }
        if(money < 0){
            break;
        }
    }
}