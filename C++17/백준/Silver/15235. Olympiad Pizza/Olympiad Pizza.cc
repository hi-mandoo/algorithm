#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> times(n);
    queue<pair<int, int> > q;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        q.emplace(i, input);
    }

    int time = 0;
    while (q.size() > 0) {
        time++;
        pair<int, int> p = q.front();
        p.second--;
        q.pop();

        if (p.second == 0) {
            times[p.first] = time;
        } else q.push(p);
    }

    for (int i = 0; i < n; i++) {
        cout << times[i] << " ";
    }
}
