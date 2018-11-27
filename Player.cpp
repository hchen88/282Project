#include "Player.h"
#include<iostream>
#include <string>

Player::Player(){
	totalValue = 0;
	splitTotalValue = 0;
}

void Player::hit(Card card){
	hand.push_back(card);
	totalValue += card.getValue();
}

void Player::hitAgain(Card card){
	splitHand.push_back(card);
	splitTotalValue += card.getValue();
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

void Player::seeHand(){
	cout<<"Your hand:"<<endl;
	for(int i = 0; i < hand.size(); i++){
		cout<<hand[i].getName()<<endl;
	}
}

void Player::seeSplitHand(){
	cout<<"Your second hand:"<<endl;
	for(int i = 0; i < splitHand.size(); i++){
		cout<<splitHand[i].getName()<<endl;
	}
}
