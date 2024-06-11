#include "Game.h"

//constructor
Game::Game()
{
	srand(time(NULL));
	int maxPlayerAmount = 4;
	gameIsRunning = true;
	for (int i = 0; i < maxPlayerAmount; i++)
	{
		createNewPlayer();
	}

	mainPlayer = playerList.at(0);
}

Game::~Game()
{
	for (Player* player : playerList) {
		std::cout << "deleted " << player->getName() << player->getMoney() <<std::endl;
		delete player;
	}
	
}

//playerList methods
void Game::createNewPlayer()
{
	Player* player = new Player(randomNameSelector());
	playerList.push_back(player);
}

void Game::removePlayer(Player* player)
{
	//TODO find way to use .erase()
}

//game methods
void Game::quitGame()
{
	gameIsRunning = false;
}

void Game::startNewRound()
{
	//TODO implement
}

int Game::run(sf::RenderWindow& gameWindow)
{
	while (gameWindow.isOpen())
	{
		sf::Event event;
		while (gameWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				gameWindow.close();
				return -1;
			}

			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.scancode == sf::Keyboard::Scan::Escape)
				{
					return 0;

				}

			}

		}

		gameWindow.clear(sf::Color(53,101,77));//poker table background color
		drawGame(gameWindow);
		gameWindow.display();

	}
	//TODO implement
	return 0;
}

void Game::drawGame(sf::RenderWindow& window)
{
	//TODO implement
}

std::string Game::randomNameSelector()
{
	int index = rand() % AVAILABLE_NAMES.size();
	return AVAILABLE_NAMES.at(index);
}



