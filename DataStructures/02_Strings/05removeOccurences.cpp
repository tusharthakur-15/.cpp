#include <iostream>
using namespace std;

string removeOccurences(string s, string part) {
    while(s.length() > 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main() {
    string s = "daabcbaabcbc", part = "abc";
    cout << removeOccurences(s, part);
}