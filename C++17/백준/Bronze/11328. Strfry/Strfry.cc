#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int count['z' - 'a' + 1] = {0};

        string s1, s2;
        cin >> s1 >> s2;
        for (int j = 0; j < s1.length(); j++) {
            count[s1[j] - 'a']++;
        }
        for (int j = 0; j < s2.length(); j++) {
            count[s2[j] - 'a']--;
        }

        bool isRight = true;
        for (int j: count) {
            if (j != 0) {
                isRight = false;
                break;
            }
        }
        cout << (isRight ? "Possible" : "Impossible") << endl;
    }
}
