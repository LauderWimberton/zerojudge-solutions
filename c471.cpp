    #include <bits/stdc++.h>

    using namespace std;

    int ans,sum;

    struct shelf{
        int w,f;
    };

    bool cmp (shelf a,shelf b){
        return (a.w*b.f<a.f*b.w);
    }


    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        int n;

        while(cin >> n){
            struct shelf b[n];

            for(int i = 0;i < n;i++) {
                cin>> b[i].w;
            }
            for(int i = 0;i < n;i++) {
                cin>> b[i].f;
            }

            sort(b,b+n,cmp);
            
            sum = b[0].w;

            for(int i = 1;i < n;i++){
                ans += sum*b[i].f;
                sum += b[i].w;
            }
        }
        cout << ans;
    }