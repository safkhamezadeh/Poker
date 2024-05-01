#include "Chips.h"
#include <iostream>

Chips::Chips(std::string color)
{
	chipColor = color;
	
	if (chipColor == "red") {
		this->setFillColor(sf::Color::Red);
	}

	else if (chipColor == "blue") {
		this->setFillColor(sf::Color::Blue);
	}

	else if (chipColor == "green") {
		this->setFillColor(sf::Color::Green);
	}

	else {
		this->setFillColor(sf::Color::Black);
	}

	this->setRadius(radius);

}
