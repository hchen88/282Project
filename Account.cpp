#include "Account.h"

Account::Account(int accountNumber){
	this->accountNumber = accountNumber;
	money = 50.00;
}

int Account::getAccountNum() const {
	return accountNumber;
}

double Account::getMoney() const {
	return money;
}

void Account::bet(double moneyBet){
	money -= moneyBet;
	cout<<"You bet $"<<moneyBet<<endl;
	cout<<"You have $"<<this.getMoney()<<" left"<<endl;
}

void Account::win(double moneyWon){
	money += moneyWon;
	cout<<"You won $"<<moneyWon<<endl;
	cout<<"Your total earnings is $"<<this.getMoney()<<endl;
}
