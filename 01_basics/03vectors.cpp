#include <iostream>
#include <vector>
using namespace std;
int main() {

    // A vector in C++ is like a resizable array

    vector<int> vec = {1,2,3,4,5};
    //cout << vec[0];

    vector<int> vect(3,0); // vector is of size 3 with all values 0

    // for each loop
    // for(int val: vect) {
    //     cout << val << endl; // val stores value of index
    // }

    // vector functions
    // cout << "size = " << vec.size() << endl;
    vec.push_back(6); // add at last
    vec.pop_back(); // remove from last
    // cout << vec.front() << endl;  
    // cout << vec.back() << endl;
    // cout << vec.at(1) << endl;

    // iterators

    vector<int> vec1 = {15,2,3,4,5};

    cout << *(vec1.begin()) << endl;

    return 0;

}