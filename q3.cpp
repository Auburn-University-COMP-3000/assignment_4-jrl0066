#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Player
{
 private:
   string name;
   int score;
 public:
   Player(){

     name = "";
     score = 0;

   }
   Player(int newScore, string newName){

     name = newName;
     score = newScore;

   }

   void setName(string newName){

     name = newName;

   }
   void setScore(int newScore){

     score = newScore;

   }
   string getName(){

     return name;

   }
   int getScore(){

     return score;

   }
};

int main(){
  int menu;
  string pName ="";
  int pScore = 0;
  const int MAX_PLAYERS = 10;
  vector<Player> team;
  

  while(menu != 5){
    cout << "\n";
    cout << "Enter an action for the Players" << endl;
    cout << "[1] Add new player" << endl;
    cout << "[2] Remove player" << endl;
    cout << "[3] See player score" << endl;
    cout << "[4] Print player list" << endl;
    cout << "[5] Exit" << endl;
    cin >> menu;
    
    if(menu < 1 || menu > 5){

      cout << "Enter a valid menu selection: ";
      cin >> menu;

    }

    switch(menu){

      case 1:{
        if(team.size() < MAX_PLAYERS){
         cout << "Enter a player's name: ";
         cin >> pName;
         cout << "Enter a player's score: ";
         cin >> pScore;
          Player newPlayer(pScore, pName);
          team.push_back(newPlayer);
        }
        else{
          cout << "Player list is full. Remove a player from the list to add another." << endl;

        }
        break;
      }
      case 2:{
        string rName;
        int remove = -1;
        cout << "Enter a player's name to be removed: ";
        cin >> rName;
        for (int i=0; i < team.size(); i++){

          if(rName == team[i].getName()){

            remove = i;
            break;

          }
        }
        if(remove != -1){

          team.erase(team.begin() + remove);
          cout << rName << " has been removed from the player list";
          break;
        }
        else {

          cout << "No players found with the name " << rName;
          break;

        }

     }
      case 3:{
        cout << "Enter a player's name to see their score: ";
        cin >> pName;
        for (int i = 0; i < team.size(); i++){

          if(pName == team[i].getName()){
            cout << "\n" << pName << "'s score: " << team[i].getScore() << endl;
            
          }
          else{
            cout << "Player not found";
          }
        }
        break;
     }
      case 4:{
        cout << left << setw(10) << "Name" << setw(10) << "Score" << endl;
        for (int i = 0; i < team.size(); i++){

          cout << left << setw(10) << team[i].getName() << setw(10) << team[i].getScore() << endl;

        }
        break;
     }
      case 5:{
        break;
      }
      default:{
        exit(1);
      }
    }
  }
  return 0;
}

