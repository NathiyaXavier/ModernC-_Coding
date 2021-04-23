//Demo on virtual functions
#include <iostream>

//To create base class
class Account{
public:
	Account(double bal) :_balance(bal) {}  //parameterized constructor

	double GetBalance() { return _balance; };
	virtual void PrintBalance() { std::cout << "Balance form base class" ; }; //make as virtual function -  can be redefined in derived class

private:
	double _balance;  
};

//derived class
class CheckingAccount :public Account {

public:
	CheckingAccount(double bal) :Account(bal) {}
	void PrintBalance() { std::cout << "Checking account balance :  " << GetBalance() << std::endl; } //redefine methods

};

//derived class
class SavingAccount :public Account {

public:
	SavingAccount(double bal) :Account(bal) {}
	void PrintBalance() { std::cout << "Saving account balance : " << GetBalance() << std::endl; } //redefine methods

};

int main() {

	CheckingAccount checkAcc{ 100 }; //obj for CheckingAccount derived class
	SavingAccount savAcc{ 999 };

	Account* pAccount = &checkAcc;  
	pAccount->PrintBalance();   // call CheckingAccount derived classs methods : print 100

	pAccount = &savAcc;
	pAccount->PrintBalance(); // call SavingAccount derived classs methods : print 999

	return 0;
}