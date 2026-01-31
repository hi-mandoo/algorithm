#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, jimin, hansoo;
    cin >> n >> jimin >> hansoo;

    int round = 0;

    while (true) {
        round++;
        if (((jimin - hansoo == 1) && (jimin % 2 == 0)) || ((hansoo - jimin == 1) && (hansoo % 2 == 0))) {
            break;
        }

        jimin = (jimin % 2 == 0) ? jimin / 2 : (jimin + 1) / 2;
        hansoo = (hansoo % 2 == 0) ? hansoo / 2 : (hansoo + 1) / 2;
    }

    cout << round;
}
