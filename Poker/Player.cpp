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

void Player::setFold(bool fold)
{
    this->fold = fold;
}
