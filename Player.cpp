#include "Player.h"

Player::Player(){
	totalValue = 0;
}

void Player::hit(Card* card){
	hand.push_back(card);
	totalValue += card.getValue();
}

void Player::stand(){
	
}

void Player::split(Card* card1, Card* card2){
	
}

void Player::removeHand(){
	hand.clear();
}

int Player::getTotalValue() const {
	return totalValue;
}
