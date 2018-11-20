#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

class Card{
	public:
		Card();
		string getName() const;
		int getValue() const;
	private:
		string cardName;
		int value;
};
#endif