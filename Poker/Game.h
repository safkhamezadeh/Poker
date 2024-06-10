#pragma once
#include "Player.h"
#include <SFML/Graphics.hpp>
#include "Screen.h"
#include <vector>
#include <string>
#include <iostream>
class Game : public Screen
{
public:
	//constructor
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

	//Player* mainPlayer = playerList.at(0); add this to constructor
	
	//game properties;
	bool gameIsRunning = false;

	//gui properties
	std::vector<sf::Text> playerListMoney;
	std::vector<sf::Text> playerNames;

	//helper functions


	//list of available playerNames
	std::vector<std::string> RandomPlayerNamesList;

	

};

