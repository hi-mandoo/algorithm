#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    queue<int> result;
    int count = 0;
    while (!q.empty()) {
        if (++count == k) {
            result.push(q.front());
            count = 0;
        } else q.push(q.front());
        q.pop();
    }

    cout << "<" << result.front();
    result.pop();
    while (!result.empty()) {
        cout << ", " << result.front();
        result.pop();
    }
    cout << ">";
}
