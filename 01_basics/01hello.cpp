#include <iostream>
using namespace std;

int main() {

    // output
    cout << "hello world" << endl;
    cout << "i am learning c++" << endl;

    //variables
    int myNum = 20;
    //cout << myNum;

    // input
    // int x;
    // cout << "type a number: ";
    // cin >> x;
    // << "your number is: " << x;

    int myNumbers[5] = {1,2,3,4,5};
    //cout << sizeof(myNumbers); // output -> 20 [ sizeof() operator returns the size of a type in bytes ]

    // pointers
    int a = 10;
    int* ptr = &a; // pointer variable stores address of myNum
    // cout << &a << endl; // memory address
    // cout << ptr;

    // int** ptr2 = &ptr;
    // cout << &ptr << endl;
    // cout << ptr2;

    // dereference operator
    int* ptr3 = &a;
    cout << *(&a) << endl; // gives value at address
    cout << *(ptr3);


    
    return 0;
}


// #include <iostream>
// int main() {
//     std::cout << "hello world";
//     return 0;
// }


// #include <iostream>
// using std::cout;
// int main() {
//     cout << "hello world";
// }