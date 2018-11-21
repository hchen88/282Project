#include "Card.h"
#include "Player.h"
#include "Account.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	double pot;
	double totalBet = 0; //overall amount bet
	double amountWon = 0; //overall earnings
	bool play = true;
	bool split = false;
	cout<<fixed<<setprecision(2);
	cout<<"We are going to play Blackjack."<<endl;
	cout<<"Enter your account number: ";
	string accountNumber;
	cin>>accountNumber;
	Account account(accountNumber);
	//This part might need to be inside the do-while loop (unsure)
	cout<<"Your current balance is $"<<account.getMoney()<<endl;
	cout<<"Enter the amount of money you would like to bet: ";
	double money;
	cin>>money;
	account.bet(money);
	pot = money; //amount for the round
	do{
		Player dealer();
		Player user();
		
		play = false; //when the user doesn't want to play again
	}
	while(play);
	cout<<"Total amount of betting money: $"<<totalBet<<endl;
	cout<<"Total amount won: $"<<amountWon<<endl;
	
	return 0;
}
