#pragma once
#include <SFML/Graphics.hpp>
#include "Chips.h"
#include <vector>
#include <iostream>

constexpr auto MAX_MENU_ITEMS = 1;

class MainMenu
{
public:

	MainMenu();
	void Draw(sf::RenderWindow& window);

	bool getState() const { return state; }
	void setState(bool state);
private:
	bool state = false;
	sf::Text textItems[MAX_MENU_ITEMS];
	sf::Font font;


};

