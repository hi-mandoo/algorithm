#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> count(1001, 0);

    for (int i = 0; i < n; i++) {
        int index = 0;
        cin >> index;
        count[index]++;
    }

    int answer = 0;
    for (int i = 1; i < 1001; i++) {
        if (count[i] > 2) {
            answer += 2;
        } else answer += count[i];
    }

    cout << answer << endl;
}
