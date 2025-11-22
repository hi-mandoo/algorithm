#include <iostream>
#include <sstream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for (int i = 0; i < testCase; i++) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        
        double number;
        ss >> number;
        
        string token;
        while (ss >> token) {
            // 비교가 되는 이유는 cpp는 == 연산자를 오버로드
            if(token == "@") {
                number *= 3;
            } else if (token == "%") {
                number += 5;
            } else if (token == "#") {
                number -= 7;
            }
        }
        
        printf("%.2f\n", number);
    }
}
