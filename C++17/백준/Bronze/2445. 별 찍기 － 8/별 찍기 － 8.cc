#include <iostream>
using namespace std;

void print(const int n, const char c) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        print(i, '*');
        print((n - i) * 2, ' ');
        print(i, '*');
        cout << "\n";
    }

    for (int i = n - 1; i > 0; i--) {
        print(i, '*');
        print((n - i) * 2, ' ');
        print(i, '*');
        cout << "\n";
    }
}
