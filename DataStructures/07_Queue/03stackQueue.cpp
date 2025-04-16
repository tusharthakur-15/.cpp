// implement stack using queues

#include <iostream>
#include <queue>
using namespace std;

class MyStack {
    public:
        queue<int> q1;
        queue<int> q2;
    
        MyStack() {
            
        }
        
        void push(int x) {
            while(!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(x);
            while(!q2.empty()) {
                q1.push(q2.front());
                q2.pop();
            }
        }
        
        int pop() {
            int ele = q1.front();
            q1.pop();
            return ele;
        }
        
        int top() {
            return q1.front();
        }
        
        bool empty() {
            return q1.empty();
        }
    };

    int main() {
        return 0;
    }
