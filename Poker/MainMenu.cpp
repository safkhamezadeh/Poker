#include "MainMenu.h"

MainMenu::MainMenu()
{

}

void MainMenu::Draw(sf::RenderWindow& window)
{
	if (!font.loadFromFile("C:\\Users\\SAfkh\\Documents\\OwnProjects\\Poker\\Assets\\Fonts\\bodoni.ttf")) {
		std::cout << "unable to load font";
	}

	textItems[0].setFont(font);
	textItems[0].setString("Play");
	textItems[0].setCharacterSize(30);
	textItems[0].setFillColor(sf::Color::Black);
	textItems[0].setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width / 2, sf::VideoMode::getDesktopMode().height / 2));

	window.draw(textItems[0]);
}

void MainMenu::setState(bool state)
{
	this->state = state;
}
