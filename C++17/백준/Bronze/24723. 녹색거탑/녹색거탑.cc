#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int answer = 2;

    for (int i = 2; i <= n; i++) {
        answer *= 2;
    }

    cout << answer;
}
