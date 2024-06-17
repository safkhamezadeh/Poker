#pragma once
#include "SFML/Graphics.hpp"
enum Suit
{
	Hearts, Diamonds, Clubs, Spades
};

enum Rank 
{
	Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace
};

class Card
{
public:
	//constructor and destructor
	Card();
	Card(Rank rank, Suit suit);
	~Card();
	void draw();

private:
	Suit suit;
	Rank rank;
	sf::RectangleShape shape;
	sf::Sprite suitSprite;
	sf::Texture rankTexture;


};