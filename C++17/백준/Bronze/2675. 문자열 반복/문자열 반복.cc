#include <iostream>
#include <string>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    for(int i=0; i<testCase; i++) {
        int time;
        string input;
        cin >> time >> input;
        
        for (int j=0; j<input.length(); j++) {
            for (int k = 0; k<time; k++) {
                printf("%c", input[j]);
            }
        }
        printf("\n");
    }
}
