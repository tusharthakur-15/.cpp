#include <iostream>
#include <algorithm>
using namespace std;

void reverse(string& str) { // pass str by reference
    int st = 0, end = str.length()-1;
    while(st <= end) {
        swap(str[st], str[end]);
        st++; end--;
    }
}

int main() {
    string str = "abc";
    // reverse(str.begin(), str.end());
    
    reverse(str);
    cout << str;
}