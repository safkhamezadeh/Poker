#include "Game.h"

//constructor
Game::Game()
{
}

//playerList methods
void Game::addPlayer(Player* player)
{
	if (playerList.size() >= 4) {
		throw;
		//TODO popup saying cant have more than 4 player
	}
	else playerList.push_back(createRandomPlayer());
}

void Game::removePlayer(Player* player)
{
    for (auto it = playerList.begin(); it != playerList.end(); ++it) {
        if (&(*it) == player) {
            playerList.erase(it);
            break;
        }
    }
}



