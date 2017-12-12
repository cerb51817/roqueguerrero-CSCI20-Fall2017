#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

class UserPlayer{
    public:
    private:
    
};

class ComputerPlayer{
    public:
    private:
    
};

class CardDealer{
    public:
    private:
    
};

int main() {
    srand(time(0));
    int deck_of_cards[52];
    char decision = 'd';
    int i;
    bool playing = true;
    string suitnames[4] = {"Spades", "Diamonds", "Clubs", "Hearts"};
    string card_number[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    
    cout << "Do you want to play Poker?[Y/N]";
    cin >> decision;
    
    switch(decision){
        case'y':
        case'Y':
            cout << "Here are your cards!" << endl;
        break;
        
        case'n':
        case'N':
            cout << "GoodBye!" << endl;
        break;
        
        default:
            cout << "Sorry didn't understand your answer! ";
            cout << "Do you want to play Poker?[Y/N]";
            cin >> decision;
        
    }
    
    // create a new deck, with cards in order, but unique
    for(i = 0;i < 52; i++){
        deck_of_cards[i] = i;
    }

    // shuffle the deck:
    for(i = 0; i < 52; i++)
    {
        // generate a random index to swap with the card at index i.
        int j = rand() % 52;
        int temp = deck_of_cards[i];
        deck_of_cards[i] = deck_of_cards[j];
        deck_of_cards[j] = temp;
    }


    // print all the cards
    for(i = 0;i < 2; i++)
    {
        int suitnumber = deck_of_cards[i] / 13;
        int rank = deck_of_cards[i] % 13;
        cout << card_number[rank] << " of " << suitnames[suitnumber]<< endl;
    }
    
    cout << "would you like another card?";
    cin >> decision;

    
    return 0;
}