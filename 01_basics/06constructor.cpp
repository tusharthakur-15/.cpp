#include <iostream>
#include <vector>
using namespace std;

// default constructor
class Chai {
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // constructor - it is called automatically when a object is created 
        Chai() {
            teaName = "abc";
            servings = 1;
            cout << "constructor called" << endl;
        }

        void displayChai() {
            cout << "tea name: " << teaName << endl;
            cout << "servings: " << servings << endl;
            cout << "Ingredients: ";
            for(string val: ingredients) {
                cout << val << " ";
            }
        }
};

// parameter constructor 
class ParamChai {
    public:
        string teaName;
        int servings;
        vector<string> ingredients;
  
        ParamChai(string name, int serve, vector<string> ingre) {
            teaName = name;
            servings = serve;
            ingredients = ingre;
            cout << "param constructor called" << endl;
        }

        void displayChai() {
            cout << "tea name: " << teaName << endl;
            cout << "servings: " << servings << endl;
            cout << "Ingredients: ";
            for(string val: ingredients) {
                cout << val << " ";
            }
        }
};

int main() {

    Chai defaultChai;
    defaultChai.displayChai();

    ParamChai paramChai("tea", 2, {"water", "tea"});
    paramChai.displayChai();

    return 0;
}