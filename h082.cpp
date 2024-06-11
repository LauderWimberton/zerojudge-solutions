#include<iostream>
#include<vector>

using namespace std;

const int siz = 1000;

vector<pair<pair<int, int>,pair<int, int>>> mat;
vector<pair<pair<int, int>,pair<int, int>>> w;
vector<pair<pair<int, int>,pair<int, int>>> l;
int n, m, str[siz], agi[siz], n[siz];


int main(){
    for(int i = 0;i < n;i++){
        cin >> str[i];
    }
    for(int i = 0;i < n;i++){
        cin >> agi[i];
    }
    for(int i = 0;i < n;i++){
        cin >> n[i];
    }

    for(int i = 0;i < n;i++){
        mat.push_back();
    }

}