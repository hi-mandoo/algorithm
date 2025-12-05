#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    string s = to_string(a * b * c);
    vector<int> v(10);
    for (int i = 0; i < s.length(); i++) {
        v[s[i] - '0']++;
    }
    for (int i: v) {
        cout << i << endl;
    }
}
