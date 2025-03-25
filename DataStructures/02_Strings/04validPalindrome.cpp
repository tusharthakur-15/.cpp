#include <iostream>
#include <cctype> // for function isalnum()
using namespace std;

// int isalnum(char ch);

bool isAlphaNumeric(char ch) {
    if((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int st = 0, end = s.length()-1;
    while(st < end) {

        if(!isAlphaNumeric(s[st])) {
            st++; continue;
        }
        if(!isAlphaNumeric(s[end])) {
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])) {
            return false;
        }

        st++; end--;

    }
    return true;
}

int main() {
    string s = "Ac3?e3c&a";
    cout << isPalindrome(s);
}