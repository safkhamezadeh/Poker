#pragma once
#include "Player.h"
#include <vector>
#include "Deck.h"
#include "Card.h"
#include "Screen.h"
#include <SFML/Graphics.hpp>

#include<iostream>

class Round : public Screen
{
public:
	Round(std::vector<Player>& players, sf::RenderWindow& gameWindow);
	int run(sf::RenderWindow& roundScreen);

private:
	int totalBet;
	Player* bigBlind;
	Player* smallBlind;
	Player* mainPlayer;

	std::vector<Player> roundWinners;
	Card communityCards[5];
	
};