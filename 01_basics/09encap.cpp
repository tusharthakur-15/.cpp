#include <iostream>

using namespace std;

class BankAccount {
    private:
        string accountNumber;
        int balance;
    
    public:
        BankAccount(string accNum, double initialBalance) {
            accountNumber = accNum;
            balance = initialBalance;
        }
        // getter
        double getBalance() const {
            return balance;
        }
        // method to deposit money
        void deposit(double amount) {
            if(amount > 0) {
                balance += amount;
                cout << "deposited: " << amount << endl;
            } else {
                cout << "invalid amount" << endl;
            }
        }
        void withdraw(double amount) {
            if(amount > 0 && amount <= balance) {
                balance -= amount;
            } else {
                cout << "invalid amount" << endl;
            }
        }

};

int main() {
    BankAccount myAccount("123456", 1000);
    myAccount.deposit(500);
    cout << myAccount.getBalance() << endl;
}