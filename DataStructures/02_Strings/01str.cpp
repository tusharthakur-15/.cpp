#include <iostream>
using namespace std;
int main() {

    // character array

    // null terminator '\0' marks the end of the string
    // char str1[] = {'a','b','c','\0'};
    // cout << str1 << endl;

    // input
    // char str2[50];
    // cout << "enter char array: ";
    // cin.getline(str2, 50); 
    // cin.getline(str2, 50, '$'); // hello worl$d -> outputs - hello worl, $ - delimiter
    // cout << "output: " << str2;

    // strings
    string str = "hello world";
    // cout << str << endl;
    // cout << str.length() << endl;

    // input
    string str1 = "hello world";
    // getline(cin, str1);
    // cout << "output: " << str1;

    for(char ch: str1) {
        cout << ch << " ";
    }

    return 0;
}