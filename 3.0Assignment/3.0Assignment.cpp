#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/26/2017
  3.0 Assignemnt - Game
  This program will have a player and computer roll a dice of the user's choice until either a 1 is rolled or player decides to stop.
  zachary Rust helped me with my program.
*/

class ComputerPlayer {
    private:
    int points;
    
    public:
    ComputerPlayer();
    void PointsAdded (int x);
    void ComputerPlayerRoll();
    void PointsReset();
    int GetPoints();
};

ComputerPlayer computer;

int players_points;

int DiceRoll() {
    int score_after_turn = 0;
    
    bool keep_rolling_dice = true;
    char input = 'x';
    
    while (keep_rolling_dice > 1){
        int random_roll_dice = (rand() % 6) + 1;
        score_after_turn = (score_after_turn + random_roll_dice);
        
        if (random_roll_dice == 1) {
            
            keep_rolling_dice = false;
            score_after_turn = 0;
            cout << "You have rolled a 1. You have received 0 points for this roll" << endl;
            cout << "Total score now: " << players_points << endl;
        }
        
        cout << "Players score after roll: " << score_after_turn << endl;
        cout << "Would you like to roll again? Y/N" << endl;
        cin >> input;
        
        switch (input) {
            case 'y':
            case 'Y':
            keep_rolling_dice = true;
            break;
            
            case 'n':
            case 'N':
            keep_rolling_dice = false;
            cout << "Points after roll: " << score_after_turn << endl;
            computer.ComputerPlayerRoll();
            break;
        }
    }
   
   return score_after_turn; 
}

ComputerPlayer::ComputerPlayer() {
    
    points = 0;
    
}

void ComputerPlayer::PointsAdded(int x) {
    
    points += x;
    
}

void ComputerPlayer::PointsReset() {
    
    points = 0;
    
}

void ComputerPlayer::GetPoints {
 
 return points;
    
}

void ComputerPlayer::ComputerPlayerRoll() {
    
    int computer_turn_points = 0;
    bool computer_player_playing = true;
    while ((computer_turn_points < 30) && computer_player_playing) {
        
        int random_roll_dice = (rand() % 6) + 1;
        if (random_roll_dice == 1) {
            
            computer_turn_points = 0;
            cout << "Computer has rolled a 0." << endl;
            computer_player_playing = false;
            DiceRoll();
        }
    
        computer_turn_points = (computer_turn_points + random_roll_dice);
        cout << "Computer turn points: " << computer_turn_points << ", " << endl;
    }
   
   points += computer_turn_points;
    
}

int PlayGame() {
    
    int player_score = 0;
    int computer_player_score = 0;
    char user_input;
    
    cout << "Would you like to roll the dices?[Y/N] ";
    cin >> user_input;
    
    bool player_deciding = false
    while (player_deciding == false) {
        switch(user_input) {
            case 'y':
            case 'Y':
            DiceRoll();
            player_deciding = true;
            break;
            
            case 'n':
            case 'N':
            computer.ComputerPlayerRoll;
            break;
            
            default:
            cout << "Would you like to roll the dices again?[Y/N] ";
            cin << user_input;
        }
    }
}

int main() {
    
    srand(time(0));
    
    char play_game = 'x';
    
    bool player_deciding = false;
    
    while (player_deciding == false) {
        
        switch (play_game) {
            
            case 'y':
            case 'Y':
            player_points = PlayGame();
            player_deciding = true;
            break;
            
            case 'n':
            case 'N':
            return 0;
            break;
            
            default :
            cout << "Do you want to play? [Y/N] " << endl;
            cin >> play_game;
        }
    }
}
/*



*/