#include "Card.h"

Card::Card(string cardName, int value){
	this->cardName = cardName;
	this->value = value;
}

string Card::getName() const {
	return cardName;
}

int Card::getValue() const {
	return value;
}
