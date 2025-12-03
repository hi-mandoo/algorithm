#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string spaces(n - i, ' ');
        string stars(2 * i - 1, '*');
        cout << spaces << stars << '\n';
    }

    for (int i = n - 1; i > 0; i--) {
        string spaces(n - i, ' ');
        string stars(2 * i - 1, '*');
        cout << spaces << stars << '\n';
    }
}
