#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long y = 0; // 영식 요금제
    long m = 0; // 민식 요금제
    for (int i = 0; i < n; i++) {
        int time;
        cin >> time;

        y += (time / 30 + 1) * 10;
        m += (time / 60 + 1) * 15;
    }

    if (y == m) cout << "Y M " << m;
    else if (y > m) cout << "M " << m;
    else if (m > y) cout << "Y " << y;
}
