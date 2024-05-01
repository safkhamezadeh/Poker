#pragma once

#include "Player.h"
#include <vector>
#include <string>
class Game
{
public:
	//constructor
	Game();

	//playerList methods
	void addPlayer(Player* player);
	void removePlayer(Player* player);

	//game methods
	void quitGame();
	void startNewRound();

private:
	//properties
	std::vector<Player> playerList;
	Player mainPlayer = playerList.at(0);

	//helper functions
	Player createRandomPlayer();


};

