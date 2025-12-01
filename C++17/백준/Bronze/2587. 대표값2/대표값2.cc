#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(5);
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        sum += v[i];
    }
    sort(v.begin(), v.end());
    printf("%d\n%d", sum/5, v[2]);
}
