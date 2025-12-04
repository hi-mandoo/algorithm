#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isFound = false;
vector<int> dwarfs(9); // 9명의 난쟁이 입력 저장
vector<int> results(7);

void dfs(int index, int sum, int start);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 9; i++) {
        cin >> dwarfs[i];
    }

    sort(dwarfs.begin(), dwarfs.end());
    dfs(0, 0, 0);
}

void dfs(int index, int sum, int start) {
    if (index == 7 && sum == 100) {
        isFound = true;
        for (int i = 0; i < 7; i++) {
            cout << results[i] << endl;
        }
        return;
    }

    if (sum > 100 || index == 7 || isFound) {
        return;
    }

    for (int i = start; i < 9; i++) {
        results[index] = dwarfs[i];
        dfs(index + 1, sum + dwarfs[i], i + 1);
    }
}