#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
#include <string>
#include <vector>

using namespace std;

class Player{
	public:
		Player();
		void hit(Card card);
		void hitAgain(Card card);
		void stand(); //dont think we need this method
		void split(); //dont think we need this method
		void removeHand();
		void removeSplitHand();
		int getTotalValue() const;
		int getSplitTotalValue() const;
		void seeHand();
		void seeSplitHand();
	private:
		vector<Card> hand;
		vector<Card> splitHand;
		int totalValue;
		int splitTotalValue;
	friend class Card;
};
#endif
