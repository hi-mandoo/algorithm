#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int *v = new int[1'000'001];
    int cursor = 0;

    for (int i = 0; i < n; i++) {
        int order;
        cin >> order;

        switch (order) {
            case 1:
                cin >> v[++cursor];
                break;
            case 2:
                if (cursor == 0) cout << -1 << '\n';
                else {
                    cout << v[cursor--] << '\n';
                }
                break;
            case 3:
                cout << cursor << '\n';
                break;
            case 4:
                cout << ((cursor == 0) ? 1 : 0) << '\n';
                break;
            case 5:
                cout << ((cursor == 0) ? -1 : v[cursor]) << '\n';
        }
    }
}
