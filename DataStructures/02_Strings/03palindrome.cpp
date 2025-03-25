#include <iostream>
#include <algorithm>
using namespace std;

bool palindrome(string& str) { // pass str by reference
    int st = 0, end = str.length()-1;
    while(st <= end) {
        if(str[st] == str[end]) {
            st++; end--;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string str = "racecar";
    cout << palindrome(str);
}