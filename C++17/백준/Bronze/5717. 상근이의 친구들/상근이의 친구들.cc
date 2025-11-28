#include <iostream>
using namespace std;

int main() {
    while(true) {
        int boy, girl;
        scanf("%d %d", &boy, &girl);
        
        if (boy == 0 && girl == 0) {
            break;
        }
        
        printf("%d\n", boy + girl);
    }
}
