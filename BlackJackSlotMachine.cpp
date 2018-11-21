#include "Card.h"
#include "Player.h"
#include "Account.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	double pot;
	double totalBet = 0;
	double amountWon = 0;
	cout<<fixed<<setprecision(2);
	cout<<"We are going to play Blackjack."<<endl;
	cout<<"Enter your account number: ";
	string accountNumber;
	cin>>accountNumber;
	Account account1(accountNumber);
	cout<<"Your current balance is $"<<account1.getMoney()<<endl;
	cout<<"Enter the amount of money you would like to bet: ";
	double money;
	cin>>money;
	account1.bet(money);
	pot = money;
	Player dealer();
	bool play = true;
	bool split = false;
	do{
		play = false;
	}
	while(play);
	cout<<"Total amount of betting money: $"<<totalBet<<endl;
	cout<<"Total amount won: $"<<amountWon<<endl;
	
	return 0;
}
