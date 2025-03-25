#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai {
    private:
        string teaName;
        int servings;
    
    public:
        Chai(string name, int serve): teaName(name), servings(serve) {}

        void display() const {
            cout << "tea name: " << teaName << endl;
        }
};