#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
/*
    Roque Guerrero
    12/11/2017
    5.0 Assignemnt
    This program runs a simple poker game that the user plays agains the computer.
*/
class UserPlayer {
    
    private:
    int user_score;
    
    public:
    
};

class ComputerPlayer {
    private:
    int computer_score;
    
    public:
    
    
};

class CardDealer {
    
    private:
    string suit_names[4]={"Spades", "Diamonds", "Clubs", "Hearts"};
    string rank_names[13]={"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    int deck_of_cards[52];
    
    public:
    
};
int main(){
    srand(time(0));
    int deck_of_cards[52];
    int i;
    string suit_names[4]={"Spades", "Diamonds", "Clubs", "Hearts"};
    string rank_names[13]={"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    char decision = 'd';
    
    cout << "Would you like to play Poker?[Y][N]";
    cin >> decision;
    
    switch (decision){
        case 'y':
        case 'Y':
            cout << "Here are your cards!";
        break;
            
        case 'n':
        case 'N':
            cout << "Ok maybe next time! Goodbye!" << endl;
        break;
            
        default:
            cout << "Sorry wrong answer!" << endl;
            cout << "Would you like to play Poker?[Y][N]";
            cin >> decision;
        break;
    }

    // create a new deck
    for(i = 0;i < 52; i++){
        deck_of_cards[i] = i;
    }

    // shuffles the deck
    for(i = 0;i < 52;i++){
        // generate a random index 
        int j = rand() % 52;
        int temp = deck_of_cards[i];
        deck_of_cards[i] = deck_of_cards[j];
        deck_of_cards[j] = temp;
    }

    // Get the rank of the first 5 cards
    int R[5]; // = {4, 7, 6, 3, 5}; // rank of the first 5 cards
    int S[5];
    for(i = 0;i < 5;i++){
        R[i] = deck_of_cards[i]%13;
        S[i] = deck_of_cards[i]/13;
    }

    // Sort the array
    bool swapped = false;
    do{
        
        swapped = false;
        for(int i = 0; i < 4; i++){
            if(R[i] > R[i + 1]){
                int temp = R[i];
                R[i] = R[i + 1];
                R[i + 1] = temp;
                swapped = true;
            }
        }
    }
    while(swapped == true);

    // print cards sorted by rank and suit
    for(i = 0;i < 5;i++){
        cout << rank_names[R[i]] << " of " << suit_names[S[i]]<< "\n";
    }

    // Check for a straight
    if(R[1]==R[0]+1 && R[2]==R[1]+1 && R[3]==R[2]+1 && R[4]==R[3]+1){
        cout << "You got a straight!" << endl;
    }
    // Check for a pair
    else if(R[0] == R[1] || R[1]==R[2] || R[2]==R[3] || R[3]==R[4]){
        cout << "You got a pair!" << endl;
    }
    //checks for three of a kind
    else if(R[0] == R[1] || R[1]==R[2] || R[2]==R[3] || R[3]==R[4]){
        cout << "You got three of a kind!" << endl;
    } 
    // Check for a flush (all the same suit)
    else if(S[0] == S[1] && S[1]==S[2] && S[2]==S[3] && S[3]==S[4]){
        cout << "You got a flush!" << endl;
    } else {
        cout << "No pair! You lose!" << endl;
    }

    return 0;
}