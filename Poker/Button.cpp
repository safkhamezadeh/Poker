#include "Button.h"

Button::Button()
{

	text.setString("Null");
}

Button::Button(std::string text, sf::Font& font)
{
    // Set rectangle properties
    shape.setSize(shapeSize);
    shape.setFillColor(idleColor);
    shape.setOutlineColor(outlineColor);
    shape.setOutlineThickness(4.f);
    shape.setOrigin(shapeSize/2.f);
    shape.setPosition(getScreenSize() /2.f); // add param in constructor to change position for more buttons

    // Set text properties
    this->text.setFont(font);
    this->text.setString(text);
    this->text.setCharacterSize(50);
    this->text.setFillColor(sf::Color::Black);
    this->text.setStyle(sf::Text::Bold);

    // Position the text in the center of the button
    this->text.setOrigin(this->text.getLocalBounds().width / 2.f, this->text.getLocalBounds().height / 2.f);
    this->text.setPosition(shape.getPosition());
}

void Button::setColor(std::string type)
{
    if (type == "hover") {
        shape.setFillColor(hoverColor);
    }
    else if (type == "pressed") {
        shape.setFillColor(pressedColor);
    }
    else if (type == "idle") {
        shape.setFillColor(idleColor);
    }
    else shape.setFillColor(idleColor);

}

void Button::draw(sf::RenderWindow& window) const
{
    window.draw(shape);
	window.draw(text);
}

bool Button::contains(sf::Vector2f mouseposition)
{
    //TODO implement
    //returns true if mouseposition is in the button

    return shape.getGlobalBounds().contains(mouseposition);
}

sf::Vector2f Button::getScreenSize()
{
    float x = sf::VideoMode::getDesktopMode().width;
    float y = sf::VideoMode::getDesktopMode().height;
    return sf::Vector2f(x,y);
}
