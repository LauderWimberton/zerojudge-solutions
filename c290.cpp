#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string X;
    cin >> X;

    int A = 0, B = 0;
    for (int i = 0; i < X.length(); i++) {
        int digit = X[i] - '0';
        if ((i + 1) % 2 == 0) {
            B += digit;
        } else {
            A += digit;
        }
    }

    int secret_diff = abs(A - B);
    cout << secret_diff << endl;

    return 0;
}
