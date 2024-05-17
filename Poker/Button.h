#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
class Button
{
public:
	//constructors
	Button();
	Button(std::string text, sf::Font& font);
	Button(std::string text, sf::Font& font, sf::Vector2f position, sf::Color); //TODO implement

	//getters and setters
	sf::Text getText() { return text; }
	void setColor(std::string type);
	

	//functions
	void draw(sf::RenderWindow& window) const;
	bool contains(sf::Vector2f mouseposition);

private:
	//attributes
	sf::Text text;
	sf::RectangleShape shape;

	sf::Vector2f shapeSize = sf::Vector2f(400, 100); //TODO add this to constructor


	//colors for the button, not the text
	sf::Color idleColor = sf::Color(231, 74, 51); //default red color
	sf::Color hoverColor = sf::Color(42, 129, 191); //default orange color
	sf::Color pressedColor = sf::Color(53,101,77);
	sf::Color outlineColor = sf::Color::White;


	//helper functions

	//function to get the screensize
	sf::Vector2f getScreenSize();
};

