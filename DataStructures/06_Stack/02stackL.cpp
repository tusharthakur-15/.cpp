#include <iostream>
#include <list>
// using c++ stl
// #include <stack> 
using namespace std;

class Stack {
    list<int> ll;

public:
    void push(int val) {
        ll.push_front(val);
    }

    void pop() {
        ll.pop_front();
    }

    int top() {
        return ll.front();
    }

    bool empty() {
        return ll.size() == 0;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);

    while(!s.empty() == 0) {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}