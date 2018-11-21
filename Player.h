#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
#include <string>
#include <vector>

using namespace std;

class Player{
	public:
		Player();
		void hit(Card* card);
		void hitAgain(Card* card);
		void stand();
		void split();
		void removeHand();
		void removeSplitHand();
		int getTotalValue() const;
		int getSplitTotalValue() const;
	private:
		vector<Card*> hand;
		vector<Card*> splitHand;
		int totalValue;
		int splitTotalValue;
	friend class Card;
};
#endif
