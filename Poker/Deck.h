#pragma once
#include <vector>
#include "Card.h"
class Deck
{
public:
	//constructor and destructor
	Deck();

	//getter
	std::vector<Card> getDeck();

	//deckMethods;
	void shuffle();
	Card dealCard();

private:
	std::vector<Card> cardDeck;

};

