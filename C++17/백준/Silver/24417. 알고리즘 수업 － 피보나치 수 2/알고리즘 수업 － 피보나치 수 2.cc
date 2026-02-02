#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long n1 = 1, n2 = 1, result = 0;

    for (int i = 3; i <= n; i++) {
        result = (n1 + n2) % 1'000'000'007;
        n1 = n2;
        n2 = result;
    }

    cout << result << " " << n - 2;
}
