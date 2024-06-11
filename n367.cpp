//n367 海龍公式
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout.precision(4);//取道小數點後第四位(後面丟掉)
    cout.flags(cout.fixed);//固定輸出有效位數


    int a,b,c;
    cin >> a >> b >> c;

    double x,y,z,area,calc;
    //math=================================================
    calc = (a + b + c)/2.0; // = x + y + z
                       //這個乘以2.0的部分 因為上面的a,b,c是int 所以在算的時候小數點後會被吃掉 所以要讓他採用浮點數計算
    x = calc - b;
    y = calc - c;
    z = calc - a;

    area = sqrt(x*y + y*z + z*x)/2;
    //=====================================================
    if(x*y + y*z + z*x <= 0){
        cout  << "error";
    }else{
        cout  << x << "\n" << y << "\n" << z << "\n" << area;
    }
}