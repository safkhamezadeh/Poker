#include "MainMenu.h"

MainMenu::MainMenu()
{
	if (!font.loadFromFile("../Assets/Fonts/bodoni.ttf")) {
		std::cout << "Unable to load font" << std::endl;
	}
	Button playButton("Play", font);
	
	menuItems[0] = playButton;
}

void MainMenu::draw(sf::RenderWindow& window)
{
	for (int i = 0; i<MAX_MENU_ITEMS; i++)
	{
		menuItems[i].draw(window);
	}
}

void MainMenu::setState(bool state)
{
	this->state = state;
}

void MainMenu::playGame()
{
	state = false;
}

int MainMenu::run(sf::RenderWindow& menuScreen)
{
    bool mouseClicked = false;
    while (menuScreen.isOpen())
    {
    
        sf::Event event;
        while (menuScreen.pollEvent(event)) //update game until clear
        {
            sf::Vector2f mousePosition(sf::Mouse::getPosition(menuScreen));
            if (event.type == sf::Event::Closed) {
                menuScreen.close();
                return -1;
            }

            //checking if mouse hovers one of the buttons
            if (event.type == sf::Event::MouseMoved) {
                //if mouse on a button
                for (Button& button : menuItems) {
                    if (button.contains(mousePosition)) {
                        if (mouseClicked == false)
                        {
                            button.setColor("hover");
                        }
                    }
                    else button.setColor("idle");
                }
            }

            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    for (Button& button : menuItems)
                    if (button.contains(mousePosition))
                    {
                        mouseClicked = true;
                        button.setColor("pressed");
                        //return 1;
                    }
                }
            }

            if (event.type == sf::Event::MouseButtonReleased)
            {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    for (Button& button : menuItems)
                        if (button.contains(mousePosition))
                        {
                            button.setColor("hover");
                            if (&button == &menuItems[0])
                                return 1;

                            //expand with other buttons
                        }
                }
                mouseClicked = false;
            }
        }

        menuScreen.clear(sf::Color::Green); //the background color

        //draw here until display
        if (getState() == true) {
            draw(menuScreen);
        }
        menuScreen.display();
    }


	return -1;
}
