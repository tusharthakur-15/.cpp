#include <iostream>
#include <string>

using namespace std;

// abstraction
class Tea {
    public:
        // virtual function
        virtual void prepareIngredients() = 0;
        virtual void brew() = 0;
        virtual void serve() = 0;

        void makeTea() {
            prepareIngredients();
            brew();
            serve();
        }
};

// derived class
class GreenTea: public Tea {
public:
    void prepareIngredients() override {
        cout << "green leaves and water is ready" << endl;
    }
    void brew() override {
        cout << "green tea brewed" << endl;
    }
    void serve() override {
        cout << "green tea served" << endl;
    }
};

int main() {
    GreenTea greenTea;
    greenTea.makeTea();

    return 0;
}