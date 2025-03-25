#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

public:
    Queue() {
        head = tail = NULL;
    }

    void push(int data) { //insert data at tail
        Node* newNode = new Node(data);

        if(empty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if(empty()) {
            cout << "Queue is empty \n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front() {
        if(empty()) {
            cout << "Queue is empty \n";
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == NULL;
    }
     
};

int main() {

    Queue q;

    // using C++ STL
    // queue<int> q; 

    // deque -> double ended queue
    return 0;
}