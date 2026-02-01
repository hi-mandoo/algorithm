#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> length(n, 0);
    vector<int> costs(n, 0);

    for (int i = 0; i < n - 1; i++) {
        cin >> length[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> costs[i];
    }

    int total = 0;
    int location = 0;

    while (location < n - 1) {
        total += costs[location] * length[location];
        int count = 0;
        for (int j = location + 1; j < n - 1; j++) {
            if (costs[location] > costs[j]) break;
            total += costs[location] * length[j];
            count++;
        }
        location += count + 1;
    }
    cout << total;
}
