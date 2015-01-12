#include <string>
#include <vector>
using namespace std;

struct Card
{
    string face;
    string suit;    /* data */
};

class DeckOfCards
{
public:
    static const int numberOfCards = 52;
    static const int faces = 13;
    static const int suits = 4;

    DeckOfCards();
    void shuffle();
    void deal() const;

private:
    vector< Card > deck;
}; //end class DeckOfCards