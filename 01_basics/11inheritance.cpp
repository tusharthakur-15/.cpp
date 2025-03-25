#include <iostream>
#include <string>
#include <vector>

using namespace std;

// base class 
class Tea {
    protected:
        string teaName;
        int servings;
    
    public:
        Tea(string name, int serve): teaName(name), servings(serve) {
            cout << "tea constructor called" << teaName << endl;
        }

        virtual void brew() const {
            cout << "brewing " << teaName << endl;
        }

        virtual void serve() const {
            cout << "serving " << servings << endl;
        }

        virtual ~Tea() {
            cout << "tea destructor called" << endl;
        }

};