#include "Card.h"

Card::Card()
{
}

Card::Card(Rank rank, Suit suit)
{
	this->rank = rank;
	this->suit = suit;
}

Card::~Card()
{
}
