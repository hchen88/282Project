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

void Player::stand(){ //might not needed
	
}

void Player::split(){ //might not needed
	
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
