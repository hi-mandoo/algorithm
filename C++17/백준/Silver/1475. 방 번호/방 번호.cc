#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string number;
    cin >> number;

    vector<int> v(10);
    for (int i = 0; i < number.length(); i++) {
        v[number[i] - '0']++;
    }

    v[6] = (v[6] + v[9] + 1) / 2;

    int max = -1;
    for (int i = 0; i < 9; i++) {
        max = std::max(max, v[i]);
    }
    cout << max << endl;
}
