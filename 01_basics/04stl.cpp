#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <map>
#include <unordered_map>
using namespace std;
int main() {

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // size = number of elements
    // cout << vec.size() << endl; 
    // capacity = double the number of elements
    // cout << vec.capacity() << endl; 

    list<int> l;

    l.push_back(4);
    l.push_back(5);
    l.push_front(2);
    l.push_front(1);

    // for(int val: l) {
    //     cout << val << " ";
    // }

    deque<int> d;

    d.push_back(4);
    d.push_back(5);
    d.push_front(2);
    d.push_front(1);

    // for(int val: d) {
    //     cout << val << " ";
    // }

    pair<int, int> p = {1, 2};
    // cout << p.first << endl;
    // cout << p.second << endl;

    stack<int> s;
    s.push(1);
    s.push(2);
    s.pop();
    // cout << s.top() << endl;


    // maps

    map<string, int> m; // stores keys in sorted order

    m["tv"] = 100;
    m["laptop"] = 50;
    m["headphones"] = 20;
    m["iphone"] = 10;

    // for(auto p: m) {
    //     cout << p.first << " " << p.second << endl;
    // }

    // if(m.find("headphones") != m.end()) {
    //     cout << "found" << endl;
    // } else {
    //     cout << "not found" << endl;
    // }

    unordered_map<string, int> un; // stores keys in random order

    un.insert({"tv", 100});
    un.insert({"laptop", 50});
    un.insert({"headphones", 20});
    un.insert({"iphone", 10});

    for(auto p: un) {
        cout << p.first << " " << p.second << endl;
    }



}