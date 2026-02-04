#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, pairs; // 컴퓨터의 수, 컴퓨터 쌍의 수
    cin >> n >> pairs;

    // 연결된 노드를 저장할 2차원 배열
    vector<vector<bool> > matrix(n + 1, vector<bool>(n + 1, false));
    for (int i = 0; i < pairs; i++) {
        int x, y;
        cin >> x >> y;
        matrix[x][y] = true;
        matrix[y][x] = true;
    }

    vector<bool> visited(n + 1, false);
    queue<int> q;
    visited[1] = true;

    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (matrix[1][i]) {
            q.push(i);
            count++;
            visited[i] = true;
        }
    }

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int i = 2; i <= n; i++) {
            if (!visited[i] && matrix[v][i]) {
                q.push(i);
                count++;
                visited[i] = true;
            }
        }
    }

    cout << count;
}
