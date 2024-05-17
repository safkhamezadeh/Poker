#include <SFML/Graphics.hpp>
#include "screens.hpp"
#include <vector>


/*
the screen numbers:
- mainMenuScreen = 0
- gameScreen = 1
....

*/

int main()
{
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Poker", sf::Style::Default);
    window.setVerticalSyncEnabled(true);

    std::vector<Screen*>screens;
    int currentScreen = 0; //startscreen is main menu

    MainMenu menu;
    screens.push_back(&menu);

    menu.setState(true);

    Game game;
    screens.push_back(&game);

    //this loop chooses which screen is currently displayed
    while (currentScreen >= 0) {
        currentScreen = screens.at(currentScreen)->run(window);
    }

    return 0;
}