#pragma once
#include "Player.h"
#include "PlayerNamesList.hpp"
#include <SFML/Graphics.hpp>
#include "Screen.h"
#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <stdlib.h>

class Game : public Screen
{
public:
	//constructor and destructor
	Game();
	~Game();

	//playerList methods
	void createNewPlayer();
	void removePlayer(Player* player);

	//game methods
	void quitGame();
	void startNewRound();

	int run(sf::RenderWindow& game);

	//draw methods
	void drawGame(sf::RenderWindow& window);

	bool getGameIsRunning() const { return gameIsRunning; }
	void setGameIsRunning(bool running);

private:
	//player properties
	std::vector<Player*> playerList;

	Player* mainPlayer;
	
	//game properties;
	bool gameIsRunning = false;

	//gui properties
	std::vector<sf::Text> playerListMoney;
	std::vector<sf::Text> playerNames;

	//helper functions
	std::string randomNameSelector();
	

};

