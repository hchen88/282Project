#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;

class Account{
	public:
		Account(int accountNumber);
		int getAccountNum() const;
		float getMoney() const;
		void bet(double moneyBet);
		void win(double moneyWon);
	private:
		int accountNumber;
		double money;
};
#endif
