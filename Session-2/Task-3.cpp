#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class BankAccount {
private:
    double balance;
    vector<string> transactions;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;

            stringstream ss;
            ss << "Deposited $" << amount;
            transactions.push_back(ss.str());
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;

            stringstream ss;
            ss << "Withdrew $" << amount;
            transactions.push_back(ss.str());
        }
    }

    void printStatement() {
        cout << "Transaction Statement:" << endl;

        for (int i = 0; i < transactions.size(); i++) {
            cout << "- " << transactions[i] << endl;
        }

        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.deposit(100);
    acc.withdraw(30);
    acc.deposit(50);
    acc.withdraw(20);

    acc.printStatement();

    return 0;
}

