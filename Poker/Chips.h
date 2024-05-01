#pragma once
#include <SFML/Graphics.hpp>


class Chips : public sf::CircleShape
{
public:
    Chips(std::string color);


private:
    float radius = 100.f;
    std::string chipColor = "black";

};

