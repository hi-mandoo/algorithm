#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    int counts['z' - 'a' + 1] = {0};
    for (int i = 0; i < s1.length(); i++) {
        counts[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++) {
        counts[s2[i] - 'a']--;
    }

    int sum = 0;
    for (int i = 0; i < 26; i++) {
        if (counts[i] < 0) sum += counts[i] * -1;
        else sum += counts[i];
    }
    cout << sum;
}
