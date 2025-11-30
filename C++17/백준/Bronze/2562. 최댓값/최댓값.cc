#include <iostream>
#include <limits>
using namespace std;

int main() {
    int max = -1;
    int index = -1;
    for(int i = 1; i<=9; i++) {
        int input;
        scanf("%d", &input);
        
        if (max < input) {
            max = input;
            index = i;
        }
    }
    printf("%d\n%d", max, index);
}
