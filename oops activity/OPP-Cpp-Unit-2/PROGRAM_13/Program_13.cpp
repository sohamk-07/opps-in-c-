#include <iostream>

class Account {
private:
    double balance;

    // Auditor is a friend class
    friend class Auditor;

public:
    explicit Account(double initialBalance)
        : balance(initialBalance) {}
};

class Auditor {
public:
    void inspect(const Account& account) const {
        std::cout << "Account Balance: "
                  << account.balance << '\n';
    }
};

int main() {
    Account account(5000.0);
    Auditor auditor;

    auditor.inspect(account);

    return 0;
}