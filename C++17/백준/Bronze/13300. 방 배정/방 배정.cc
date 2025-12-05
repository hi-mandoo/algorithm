#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; // 수학여행에 참가하는 학생 수, 한 방에 배정할 수 있는 최대인원 수
    cin >> n >> k;
    double students[7][2] = {0};
    for (int i = 0; i < n; i++) {
        int s, y;
        cin >> s >> y;
        students[y][s]++;
    }

    int sum = 0;
    for (int i = 1; i < 7; i++) {
        sum += std::ceil(students[i][0] / k);
        sum += std::ceil(students[i][1] / k);
    }

    cout << sum;
}
