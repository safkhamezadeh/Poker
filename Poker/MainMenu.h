#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"
#include "Screen.h"
#include <vector>
#include <iostream>

constexpr auto MAX_MENU_ITEMS = 1;

class MainMenu : public Screen
{
public:
	//constructor
	MainMenu();

	//window drawing
	void draw(sf::RenderWindow& window);

	//menu states
	bool getState() const { return state; }
	void setState(bool state);

	//game starting
	void playGame();
	int run(sf::RenderWindow& menuScreen);

private:
	bool state = false;
	Button menuItems[MAX_MENU_ITEMS];
	sf::Font font;

};

