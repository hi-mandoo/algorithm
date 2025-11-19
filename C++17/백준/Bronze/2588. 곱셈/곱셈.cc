#include <iostream>
using namespace std;

int main() {
    int one, two;
    cin >> one >> two;
    cout << one * (two % 10) << "\n";
    cout << one * (two / 10 - two / 100 * 10) << "\n";
    cout << one * (two / 100) << "\n";
    cout << one * two << "\n";
    return 0;
}