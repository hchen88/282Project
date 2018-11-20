#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>

using namespace std;

class Player{
	public:
		Player(Card card1, Card card2);
		void hit();
		void stand();
		void split();
		void removeHand();
		void calculateValue();
		int getTotalValue() const;
	private:
		vector<Card*> hand;
		int totalValue;
	friend class Card;
};
#endif
