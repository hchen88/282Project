#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

class Card{
	public:
		Card(string cardName, int value);
		string getName() const;
		int getValue() const;
		void setValue(int value);
	private:
		string cardName;
		int value;
};
#endif
