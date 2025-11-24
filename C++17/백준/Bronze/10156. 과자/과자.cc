#include <iostream>
using namespace std;

int main() {
    double k, n, m; // 과자 한 개 가격, 사려고 하는 과자 개수, 현재 가진 돈
    cin >> k >> n >> m;
    
    int ans = k * n - m;
    cout << ((ans >= 0) ? ans:0);
}
