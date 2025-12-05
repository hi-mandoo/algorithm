#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> v('z' - 'a' + 1);
    for (int i = 0; i < s.length(); i++) {
        v[s[i] - 'a']++;
    }

    for (int i: v) {
        cout << i << " ";
    }
}
