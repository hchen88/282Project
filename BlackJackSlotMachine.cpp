#include "Card.h"
#include "Player.h"
#include "Account.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	string menu = "Choose number option:\n1. Hit\n2. Stand\n3. Split";
	string hit = "1";
	string stand = "2";
	string split = "3";
	
	//create the deck of cards
	string faces[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
	int values[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
	vector<Card> deck;
	for(int i = 0; i < 13; i++){
		for(int j = 0; j < 4; j++){
			Card card(faces[i], values[i]);
			deck.push_back(card);
		}
	}
	
	double pot;
	double totalBet = 0; //overall amount bet
	double amountWon = 0; //overall earnings
	bool play = true;
	bool isSplit = false;
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
		Player dealer;
		Player user;
		string option; //chooses what the user wants to do (hit, stand, split)
		
		//initial dealing 
		user.hit(deck[0]); //example dealing, not final
		user.hit(deck[1]);
		user.seeHand();
		dealer.hit(deck[2]);
		dealer.hit(deck[3]);
		dealer.seeDealerHand();
		
		cout<<menu<<endl;
		cin>>option;
		while(option != stand){
			if(option == hit){
				if(isSplit == false){ //doesn't have a second hand
					user.hit(deck[4]); //example dealing
				}
				else{ //does have a second hand
					//automatically hit both or choose which hand to hit?
				}
			}
			else if(option == split){
				isSplit = true;
				user.hitSplit(deck[5]); //example dealing
			}
			else if(option == stand){ //done with selecting cards for both the first hand and the second hand
				if(dealer.getTotalValue() < 17){
					dealer.hit(deck[6]);
				}
			}
		}
		
		//end of the round, displaying the total values of the hands, determing the winner
		cout<<"Total value for the dealer's hand: "<<dealer.getTotalValue()<<endl;
		if(dealer.getTotalValue() > 21){
			
		}
		else if(isSplit){
			cout<<"Total value for your first hand: "<<user.getTotalValue()<<endl;
			cout<<"Total value for your second hand: "<<user.getSplitTotalValue()<<endl;
		}
		else{
			cout<<"Total value for your hand: "<<user.getTotalValue()<<endl;
		}
		
		play = false; //when the user doesn't want to play again
	}
	while(play);
	cout<<"Total amount of betting money: $"<<totalBet<<endl;
	cout<<"Total amount won: $"<<amountWon<<endl;
	
	return 0;
}
