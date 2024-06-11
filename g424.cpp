#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll siz = 100000;

ll M[siz + 1];
ll loli[siz + 1];
ll n,k;

int main(){

	ios::sync_with_stdio(0);
    cin.tie(0);

	cin>>n>>k;

	deque<pair<ll,ll>> temp;

	for(int i=1;i<=n;i++){
        cin>>loli[i];
        loli[i]+=loli[i-1];
    }
	
	temp.push_back({0,0});

	for(int i=1;i<=n;i++){
		while(temp.size() && i-temp.front().first>k){
            temp.pop_front();
        }
		M[i] = loli[i] - temp.front().second;

		M[i] = max(M[i],M[i-1]);

		ll pb = loli[i]-M[i-1];

		while(temp.size()&&temp.back().second>=pb){
            temp.pop_back();
        }
		temp.push_back({i,pb});
	}
	cout<<M[n];
}