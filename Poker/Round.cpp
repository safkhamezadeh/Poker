#include "Round.h"

Round::Round(std::vector<Player> &players)
{
	totalBet = 0;
	bigBlind = &players.at(1);
	std::cout << bigBlind->getName();
}
