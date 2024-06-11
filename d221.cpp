#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> N && N != 0) {
        priority_queue<int, vector<int>, greater<int>> pq; 


        for (int i = 0; i < N; ++i) {
            int num;
            cin >> num;
            pq.push(num);
        }

        long long totalCost = 0;

      
        while (pq.size() > 1) {
            int num1 = pq.top(); 
            pq.pop(); 
            int num2 = pq.top();
            pq.pop(); 
            int sum = num1 + num2; 
            totalCost += sum;
            pq.push(sum); 
        }

        cout << totalCost << "\n";
    }

    return 0;
}
