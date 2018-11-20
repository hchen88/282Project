#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>

using namespace std;

class Player{
	public:
		Player();
		void hit(Card* card);
		void stand();
		void split(Card* card1, Card* card2);
		void removeHand();
		int getTotalValue() const;
	private:
		vector<Card*> hand;
		int totalValue;
	friend class Card;
};
#endif
