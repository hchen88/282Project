#include "Player.h"
#include<iostream>
#include <string>

Player::Player(){
	done = false;
	doneSplit = false;
}

void Player::hit(Card card){
	hand.push_back(card);
	//checks whether the player have 21 or above; cant hit anymore
	if(this->getTotalValue() >= 21){
		done = true;
	}
}

void Player::hitSplit(Card card){
	splitHand.push_back(card);
	//checks whether the player have 21 or above; cant hit anymore
	if(this->getTotalValue() >= 21){
		doneSplit = true;
	}
}

bool Player::isDone(){
	return done;
}

bool Player::isDoneSplit(){
	return doneSplit;
}

void Player::removeHand(){
	hand.clear();
	//need to add to a new stack (deck)
}

void Player::removeSplitHand(){
	splitHand.clear();
	//need to add to a new stack (deck)
}

int Player::getTotalValue() const {
	int totalValue = 0;
	for(int i = 0; i < hand.size(); i++){
		totalValue += hand[i].getValue();
	}
	return totalValue;
}

int Player::getSplitTotalValue() const {
	int splitTotalValue = 0;
	for(int i = 0; i < splitHand.size(); i++){
		splitTotalValue += splitHand[i].getValue();
	}
	return splitTotalValue;
}

void Player::seeHand(){
	cout<<"Your hand:"<<endl;
	for(int i = 0; i < hand.size(); i++){
		cout<<hand[i].getName()<<endl;
	}
	cout<<"Total value: "<<this->getTotalValue()<<endl;
}

void Player::seeSplitHand(){
	cout<<"Your hand you split:"<<endl;
	for(int i = 0; i < splitHand.size(); i++){
		cout<<splitHand[i].getName()<<endl;
	}
	cout<<"Total value: "<<this->getSplitTotalValue()<<endl;
}

void Player::seeDealerHand(){
	cout<<"One of the dealer's card: "<<hand[0].getName()<<endl;
}
