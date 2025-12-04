#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swap(vector<int> &v, int start, int end);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(21);
    for (int i = 1; i < 21; i++) { v[i] = i; }

    for (int i = 0; i < 10; i++) {
        int start, end;
        cin >> start >> end;

        swap(v, start, end);
    }

    for (int i = 1; i < 21; i++) {
        cout << v[i] << " ";
    }
}

void swap(vector<int> &v, int start, int end) {
    int count = (end - start + 1) / 2;

    for (int i = 0; i < count; i++) {
        std::swap(v[start + i], v[end - i]);
    }
}
