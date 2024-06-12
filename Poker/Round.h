#pragma once
#include "Player.h"
#include <vector>
#include "Deck.h"
#include "Card.h"

#include<iostream>;

class Round
{
public:
	Round(std::vector<Player>& players);

private:
	int totalBet;
	Player* bigBlind;
	Player* smallBlind;
	Player* mainPlayer;

	std::vector<Player> roundWinners;
	Card communityCards[5];
	
};

