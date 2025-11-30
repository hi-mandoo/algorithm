#include <iostream>
#include <limits>
using namespace std;

int main() {
    int sum = 0;
    int min = numeric_limits<int>::max();
    
    for (int i = 0; i<7; i++) {
        int input;
        scanf("%d", &input);
        if (input % 2 != 0) {
            sum += input;
            min = std::min(min, input);
        }
    }
    
    if (sum != 0) {
        printf("%d\n%d", sum, min);
        
    } else {
        cout << -1;
    }
    
}
