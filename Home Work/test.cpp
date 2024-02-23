#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(std::string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    // Getter methods
    std::string getAccountHolder() const {
        return accountHolder;
    }

    double getBalance() const {
        return balance;
    }

    // Setter methods
    void setAccountHolder(std::string holder) {
        accountHolder = holder;
    }

    void setBalance(double newBalance) {
        balance = newBalance;
    }

    // Member functions for transactions
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << " into the account. New balance: $" << balance << std::endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
        }
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("John Doe", 1000.0);

    // Displaying initial account information
    std::cout << "Account Holder: " << myAccount.getAccountHolder() << std::endl;
    std::cout << "Initial Balance: $" << myAccount.getBalance() << std::endl;

    // Performing transactions
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(900.0);  // This should fail due to insufficient funds

    // Displaying updated account information
    std::cout << "\nUpdated Account Information:" << std::endl;
    std::cout << "Account Holder: " << myAccount.getAccountHolder() << std::endl;
    std::cout << "Current Balance: $" << myAccount.getBalance() << std::endl;

    return 0;
}