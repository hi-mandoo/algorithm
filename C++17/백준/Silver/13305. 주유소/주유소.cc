#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> length(n, 0);
    vector<long long> costs(n, 0);

    for (int i = 0; i < n - 1; i++) {
        cin >> length[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> costs[i];
    }

    long long min_cost = costs[0];
    long long total = 0;

    for (int i = 0; i < n - 1; i++) {
        min_cost = min(min_cost, costs[i]);
        total += min_cost * length[i];
    }
    cout << total;
}
