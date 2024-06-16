#pragma once
#include <vector>
#include "Card.h"
class Deck
{
public:
	//singleton
	Deck();

	static std::vector<Card> cardDeck;

	//deckMethods;
	static void shuffle();
	static Card dealCard();

private:
};

