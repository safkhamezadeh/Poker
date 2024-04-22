#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Poker", sf::Style::Default); // TODO add quit button on main menu or ctrl W support
    window.setVerticalSyncEnabled(true);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(sf::Vector2f(0, 0));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) //update game until clear
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Green);
        //draw here until display
        window.draw(shape);
        window.display();
    }

    return 0;
}