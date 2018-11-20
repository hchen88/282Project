#include "Card.h"
#include "Player.h"
#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	double pot;
	cout<<"We are going to play Blackjack."<<endl;
	cout<<"Enter your account number: ";
	int accountNumber;
	cin>>accountNumber;
	Account account1(accountNumber);
	cout<<"Enter the amount of money you would like to bet: ";
	double money;
	cin>>money;
	account1.bet(money);
	pot = money;
	
	return 0;
}
