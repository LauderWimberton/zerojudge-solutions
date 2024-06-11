#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int a=0,b=0,s=0,t=0;
	cin >> a >> b >> s >> t;

	int hour=t;

	int minutes=30*t+b;

	if(minutes>=60){
		while(minutes>=60){
			minutes-=60;
			hour+=1;
		}
	}

	else{
		while(minutes<60){
			minutes+=60;
			hour-=1;
		}
	}
	if(minutes>=60){
		minutes-=60;
		hour+=1;
	}
	int tr=hour+a;
	if(tr>36){
		tr-=36;
	}
	else if (tr<0){
		tr+=36;
	}

	cout << tr << ":" << minutes << ":" << s;
}

