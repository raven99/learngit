#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()
	:deck( numberOfCards )
{
	static string suit[ suit ] = 
		{ "Hearts", "Diamonds", "Clubs", "spades" };
	static string face[ faces ] = 
		{ "Ace", "Deuce", "Three", "Four", "Five", "Six" , "Seven",
		"Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	for ( int i = 0; i < numberOfCards; i++ )
	{
		deck[ i ].face = face[ i % face ];
		deck[ i ].suit = suit[ i % face ];
	}//end for
	srand( time( 0 ) );
}

void DeckOfCards::shuffle()
{
	for( int i = 0; i < numberOfCards; i++)
	{
		int j = rand() % numberOfCards;
		Card temp = deck[ i ];
		deck[ i ] = deck[ j ];
		deck[ j ] = temp;
	}
}

void DeckOfCards::deal() const
{
	for ( int i = 0; i < numberOfCards; i++)
		cout << right << setw( 5 ) << deck[ i ].face << " of "
		<< left  << setw( 8 ) << deck[ i ].suit
		<<( ( i + 1)  % 2? ' \t ' : ' \n' );
}