#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int n, answer;
vector<vector<int> > board;
vector<bool> selected;

void dfs(int count, int index);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    answer = numeric_limits<int>::max();

    board = vector<vector<int> >(n, vector<int>(n, 0));
    selected = vector<bool>(n, false);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    dfs(0, 0);
    cout << answer;
}

void dfs(int count, int index) {
    if (count == n / 2) {
        int startTeam = 0;
        int linkTeam = 0;

        for (int i = 0; i < n; i++) {
            if (selected[i]) {
                for (int j = 0; j < n; j++) {
                    if (j == i || !selected[j]) continue;
                    startTeam += board[i][j];
                }
            } else {
                for (int j = 0; j < n; j++) {
                    if (j == i || selected[j]) continue;
                    linkTeam += board[i][j];
                }
            }
        }

        answer = min(answer, abs(startTeam - linkTeam));
        return;
    }

    for (int i = index; i < n; i++) {
        selected[i] = true;
        dfs(count + 1, i + 1);
        selected[i] = false;
    }
}
