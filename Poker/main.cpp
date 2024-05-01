#include <SFML/Graphics.hpp>
#include "Chips.h"
#include "MainMenu.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Poker", sf::Style::Default);
    window.setVerticalSyncEnabled(true);

    MainMenu menu;
    menu.setState(true);

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
        if (menu.getState()) {
            menu.Draw(window);
        }
        window.display();
    }

    return 0;
}