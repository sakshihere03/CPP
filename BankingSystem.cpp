#include <iostream>
using namespace std;

class BankAccount {
private:
  string createdOn;
  int balance;

public:
  int accountnumber;
  string name;
  string type;
  // Default contructor
  BankAccount() {
    createdOn = "2026-1-3";
    balance = 0;
    accountnumber = 12345;
    name = "dummy";
    type = "savings";
  }
  // Parameterized contructor
  BankAccount(string createdOn, int balance, int accountnumber, string name,
              string type) {
    this->createdOn = createdOn; // this wrong
    this->balance = balance;
    this->accountnumber = accountnumber;
    this->name = name;
    this->type = type;
  }
  // copy constructor
  BankAccount(BankAccount &account) {
    createdOn = account.createdOn;
    name = account.name;
    type = account.type;
    balance = account.balance;
    accountnumber = account.accountnumber;
  }
  int getBalance() { return balance; }
  void setBalance(int newBalance) {
    if (newBalance < 0) {
      return;
    }
    balance = newBalance;
  }
  string getCreatedDate() { return createdOn; }
  int getAccountNumber() { return accountnumber; }
  string getName() { return name; }
  string getType() { return type; }
  BankAccount &setHolderName(string name) {
    this->name = name;
    return *this;
  }
  BankAccount &setType(string type) {
    this->type = type;
    return *this;
  }
  BankAccount &deposit(int amount) {
    if (amount < 0) {
      cout << "Invalid amount" << endl;
      return *this;
    }
    balance += amount;
    return *this;
  }
  BankAccount &widthraw(int amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
    } else {
      cout << "Invalid Amount" << endl;
    }
    return *this;
  }
  void display() {
    cout << "Account Holder name: " << name << endl;
    cout << "Account number: " << accountnumber << endl;
  }
  ~BankAccount() {
    cout << "This account is now deleted" << accountnumber << endl;
    cout << "Logging is done" << endl;
  }
};
int main() {
  // Q1-Write a function to deposit a given
  // amount into you account object.
  // It should handle all of the edge cases.
  // Q2-Write a function to widthraw a given
  // amount from your account.
  // It should handle all edge cases.
  // calling defalult constructorss
  //   BankAccount Account1; // object
  // Accessing Data Members
  //   cout << Account1.accountnumber;
  // Accessing Member functions
  //   cout << Account1.getAccountNumber();
  // calling parameterized constructor
  //   BankAccount Account2("2026-3-2", 0, 99999, "Rahul", "Saving");
  //   Account2.display();

  //   BankAccount CopyAccount2(Account2);
  //   CopyAccount2.display();

  // This is a pointer which refers to the current
  // object it can be used inside the class

  // method chaining using this pointer
  //   Account2.setHolderName("vishal").setType("current").setBalance(1200);
  //   cout << Account2.getName() << endl;
  //   cout << Account2.getType() << endl;
  //   cout << Account2.getBalance() << endl;

  // Deposit and withdraw test
  BankAccount testAccount("2026-01-02", 10000, 99999, "vishal", "saving");
  testAccount.deposit(10000).widthraw(2000);
  cout << testAccount.getBalance() << endl;
}