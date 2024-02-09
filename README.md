#include <iostream>
#include <string>
using namespace std;
bool isValidParentheses(const std::string& s) {
    int openCount = 0;
    for (char c : s) {
        if (c == '(') {
            openCount++;
        } else if (c == ')') {
            if (openCount == 0) {
                return false; 
            }
            openCount--;
        }
    }
    return openCount == 0; 
}
int main() {
  string str = "(())()"; 
  cout << "String: " << str ;
  cout << "Is Valid Parentheses: " << (isValidParentheses(str) ? "true" : "false");
    return 0;
}
