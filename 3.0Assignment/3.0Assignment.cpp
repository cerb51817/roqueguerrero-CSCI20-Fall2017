#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/26/2017
  3.0 Assignemnt - Game
  This program will have a player and computer roll a dice of the user's choice until either a 1 is rolled or player decides to stop.
  Zachary Rust helped me with my program.
*/
//This is the class for the computer player.
class ComputerPlayer {
    private:
    int computer_points;
    
    public:
    ComputerPlayer(); // construct
    int ComputerRoll();
    void PointsAdded(int P);
    void PointsReset();
    int GetPoints();
};
// This is the class for the user.
class UserPlayer{
    
    private:
    int user_player_points;
    
    public:
    UserPlayer(); // construct
    int UserPlayerRoll();
    void PointsAdded(int P);
    int GetPoints();
    
};
//This is the default constructtor that sets players points to 0 at the start of the game.
UserPlayer::UserPlayer(){
    user_player_points = 0;
}
//Add point from each turn to total score.
void UserPlayer::PointsAdded(int P) {
    user_player_points += P;
}
//This function allow total point for player to be called
int UserPlayer::GetPoints(){
    return user_player_points;
}
//This is the default constructor for the computer player that sets the computter points to 0 at the start of the game.
ComputerPlayer::ComputerPlayer(){
    computer_points = 0;
}
// This function is computer dice roll.
int ComputerPlayer::ComputerRoll(){
    int computer_random_roll = rand() % 6 + 1;
    return computer_random_roll;
}
//This function is the player dice roll.
int UserPlayer::UserPlayerRoll(){
    int random_num = rand() % 6 + 1;
}
//This function allow to call the total score.
int ComputerPlayer::GetPoints(){
    return computer_points;
}
//This function add the turn points to total score.
void ComputerPlayer::PointsAdded(int P){
    computer_points += P;
}

int main(){
    //classes
    UserPlayer P;
    ComputerPlayer CP;
    
    //set for random number generator
    srand(time(0));
    //Variable that keep track of score and check the game
    bool playing = true;
    int player_turn_score = 0;
    int computer_turn_points = 0;
    int roll_dice_score = 0;
    int computer_random_num = 0;
    

    char decision = 'd';
    //loop for game
    while(playing){
        cout << "Do you want to roll the dice?[Y/N]" << endl;
        cout << "If you would like to check your score instead please press [S]?" << endl;
        cin >> decision;
        //switch statement
        switch (decision){
            case 'Y':
            case 'y':
            roll_dice_score = P.UserPlayerRoll();
            //if statemnet checks to see if the user rolled a 1.
            if(roll_dice_score != 1){
                player_turn_score += roll_dice_score;
            //if statement checks to see if the player won. Also check that the user doesn't go over 100.
                if(player_turn_score + P.GetPoints() >= 100) {
                    cout << "Congragulation! You have won the match!" << endl;
                    playing = false;
                    break;
                }
            cout << "You have rolled a: " << roll_dice_score << endl;
            cout << "Your points from this turn: " << player_turn_score << endl;
            break;
            }
            else {
                player_turn_score = 0;
                cout << "Oh no! You have rolled a 1. Your points have been reset back to 0. Total score: " << P.GetPoints() << endl;
                decision = 'n';
            }
            case 'n':
            case 'N':
            P.PointsAdded(player_turn_score); //User points are add when user turn has ended.
            //This loop is for the computer. Loop runs until computer has a score above 30.
            while (computer_turn_points <= 30) {
            //if statement checks to see if computer has won before rolling again.
                if(computer_turn_points + CP.GetPoints() >= 100) {
                cout << "You have been defeated! Computer has won!" << endl;
                playing = false;
                break;
            }
            computer_random_num = CP.ComputerRoll();
            
            //show player the computer turns
            cout << "Computer has rolled a: " << computer_random_num << "." << endl;
            //if statementt see if the computer has rolled a 1.
            if(computer_random_num != 1){
                computer_turn_points += computer_random_num;
            }
            //if-else statement reset the computer score if a 1 is rolled.
            else {
                computer_turn_points = 0;
                cout << "Computer has rolled a 1 and its turn points have been reset." << endl;
                break;
            }
        }
        //
        CP.PointsAdded(computer_turn_points);
        cout << "Computer received " << computer_turn_points << " points during their turn." << endl;
        cout << "The computer has a total of " << CP.GetPoints() << " points" << endl;
        computer_turn_points = 0;
        break;
        //This switch statement allow user to check the current score at anytime.
        case 's':
        case 'S':
        cout << "Your current total score: " << P.GetPoints() << endl;
        cout << "Computer's current total score: " << CP.GetPoints() << endl;
        break;
        //default case for invalid input.
        default:
        cout << "Would you like to roll the dice?[Y/N]";
        break;
    }
  }
}

/*
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
Y
You have rolled a: 3
Your points from this turn: 3
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
Y
You have rolled a: 2
Your points from this turn: 5
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
Y
You have rolled a: 6
Your points from this turn: 11
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 5
Your points from this turn: 16
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
Oh no! You have rolled a 1. Your points have been reset back to 0. Total score: 0
Computer has rolled a: 3.
Computer has rolled a: 2.
Computer has rolled a: 2.
Computer has rolled a: 6.
Computer has rolled a: 1.
Computer has rolled a 1 and its turn points have been reset.
Computer received 0 points during their turn.
The computer has a total of 0 points
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
S
Your current total score: 0
Computer's current total score: 0
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 3
Your points from this turn: 3
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 3
Your points from this turn: 6
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 5
Your points from this turn: 11
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 3
Your points from this turn: 14
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 6
Your points from this turn: 20
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
n
Computer has rolled a: 6.
Computer has rolled a: 1.
Computer has rolled a 1 and its turn points have been reset.
Computer received 0 points during their turn.
The computer has a total of 0 points
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 2
Your points from this turn: 22
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 5
Your points from this turn: 27
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
n
Computer has rolled a: 4.
Computer has rolled a: 4.
Computer has rolled a: 2.
Computer has rolled a: 4.
Computer has rolled a: 4.
Computer has rolled a: 6.
Computer has rolled a: 2.
Computer has rolled a: 5.
Computer received 31 points during their turn.
The computer has a total of 31 points
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
s
Your current total score: 47
Computer's current total score: 31
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?
y
You have rolled a: 5
Your points from this turn: 32
Do you want to roll the dice?[Y/N]
If you would like to check your score instead please press [S]?

*/