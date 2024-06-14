#pragma once
#include "Player.h"
#include "PlayerNamesList.hpp"
#include <SFML/Graphics.hpp>
#include "Screen.h"
#include "Round.h"
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
	void startNewRound(sf::RenderWindow& window);

	int run(sf::RenderWindow& game);

	//draw methods
	void drawGame(sf::RenderWindow& window);

	bool getRoundIsRunning() const { return roundIsRunning; }
	void setRoundIsRunning(bool running);

private:
	//player properties
	std::vector<Player> playerList;

	Player* mainPlayer;
	
	//game properties;
	bool roundIsRunning = false;
	bool gameIsRunning;
	Round* currentRound = nullptr;

	//gui properties
	std::vector<sf::Text> playerListMoney;
	std::vector<sf::Text> playerNames;

	//helper functions
	std::string randomNameSelector();
	

};

