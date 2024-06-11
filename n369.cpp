#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    set<string> acc;

    for (int i = 0; i < N; ++i) {
        string email, user;
        cin >> email >> user;

        if (acc.find(email) == acc.end()) {
            acc.insert(email);
            cout << "welcome, " << user << endl;
        } else {
            cout << user << " account has been used" << endl;
        }
    }

    return 0;
}
