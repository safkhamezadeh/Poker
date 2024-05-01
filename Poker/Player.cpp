#include "Player.h"

// Constructor implementation
Player::Player(std::string name, int money) {
    this->money = money;
    this->name = name;
    fold = false;
}

// Getter for money
int Player::getMoney() const {
    return money;
}

// Method to update money
void Player::updateMoney(int value) {
    money += value;
}

// Getter for name
std::string Player::getName() const {
    return name;
}

// Getter for fold status
bool Player::isFolded() const {
    return fold;
}

//TODO implement player actions
//player actions methods

int Player::raise(int raiseAmount)
{
    return 0;
}

int Player::bet(int betAmount)
{
    return 0;
}

int Player::call(int callAmount)
{
    return 0;
}


void Player::setFold(bool fold)
{
    this->fold = fold;
}