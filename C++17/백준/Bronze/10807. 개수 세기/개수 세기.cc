#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int v;
    cin >> v;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] == v) count++;
    }
    cout << count;
}
