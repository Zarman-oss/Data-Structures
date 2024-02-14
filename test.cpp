#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
  string ownerName;
  string accountNumber;
  double balance;

public:
  BankAccount(string name, string accNumber, double initialBalance)
  {
    ownerName = name;
    accountNumber = accNumber;
    balance = initialBalance;
  }

  void deposit(double amount)
  {
    balance += amount;
    cout << "Deposit of $" << amount << " successful." << endl;
  }

  void withdraw(double amount)
  {
    if (balance >= amount)
    {
      balance -= amount;
      cout << "Withdrawal of $" << amount << " successful." << endl;
    }
    else
    {
      cout << "Insufficient funds." << endl;
    }
  }

  void checkBalance()
  {
    cout << "Account Balance for " << ownerName << " (" << accountNumber << "): $" << balance << endl;
  }
};

int main()
{
  BankAccount myAccount("John Doe", "123456789", 1000.00);

  myAccount.checkBalance(); // Initial balance

  myAccount.deposit(500.0); // Deposit $500
  myAccount.checkBalance(); // Balance after deposit

  myAccount.withdraw(200.0); // Withdraw $200
  myAccount.checkBalance();  // Balance after withdrawal

  myAccount.withdraw(2000.0); // Attempt to withdraw more than balance
  myAccount.checkBalance();   // Balance after failed withdrawal

  return 0;
}
