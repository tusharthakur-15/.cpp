#include <iostream>
#include <vector>

using namespace std;

class Chai {
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai() {
            teaName = "unknown tea";
            servings = 1;
            ingredients = {"water", "tea"};
        }

        Chai(string name, int serve, vector<string> ingre) {
            teaName = name;
            servings = serve;
            ingredients = ingre;
        }

        // getter
        string getTeaName() {
            return teaName;
        }

        // setter
        void setTeaName(string name) {
            teaName = name;
        }

        int getServings() {
            return servings;
        }

        void setServings(int serve) {
            servings = serve;
        }

        vector<string> getIngredients() {
            return ingredients;
        }

        void setIngredients(vector<string> ingre) {
            ingredients = ingre;
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
    Chai chai;
    chai.setTeaName("lemon tea");
}