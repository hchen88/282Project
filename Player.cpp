#include "Player.h"

Player::Player(){
	totalValue = 0;
	splitTotalValue = 0;
}

void Player::hit(Card* card){
	hand.push_back(card);
	totalValue += card->getValue();
}

void Player::hitAgain(Card* card){
	splitHand.push_back(card);
	splitTotalValue += card->getValue();
}

void Player::stand(){
	
}

void Player::split(){
	
}

void Player::removeHand(){
	hand.clear();
	totalValue = 0;
}

void Player::removeSplitHand(){
	splitHand.clear();
	splitTotalValue = 0;
}

int Player::getTotalValue() const {
	return totalValue;
}

int Player::getSplitTotalValue() const {
	return splitTotalValue;
}
