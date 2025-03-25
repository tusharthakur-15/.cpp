#include <iostream>
#include <vector>
using namespace std;

class Chai {
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

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

    Chai chaiObj;

    chaiObj.teaName = "lemon tea";
    chaiObj.servings = 2;
    chaiObj.ingredients = {"lemon", "tea"};
    chaiObj.displayChai();

    return 0;
}