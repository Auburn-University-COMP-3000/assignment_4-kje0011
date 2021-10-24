#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
 private:
   string name;
   int score;
   int numPlayers;
 public:
   Player(){
     name ="";
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
   void addPlayer(int &numPlayer, vector<Player> players){
     if (numPlayer == 10){
       cout << "Player array full." << endl;
     }
     else{
       cout << "Enter player name" << endl;
       cin >> name;
       cout << "Enter player score" << endl;
       cin >> score;
       Player newPlayer(score, name);
       players.push_back(newPlayer);
       numPlayer++;
     }
   }
   void printPlayers(int numPlayers, vector<Player> players){
     cout << "Player Scores" << endl;
     for (int i=0; i < numPlayers; i++){
      cout << players[i].getName() << " " << players[i].getScore() << endl;
     }
   }
   void removePlayer(int &numPlayer, vector<Player> players){
     cout << "Enter player name to remove" << endl;
     cin >> name;
     int nameLoc = -1;
     for (int i = 0; i < players.size(); i++){
       if (name == players[i].getName())
       nameLoc = i;
     }
   }
};

int main() {
  Player play;
  char ans;
  string name = "";
  int score = 0;
  int numPlay = 0;
  vector<Player> players;
  cout << "Add a player" << endl;
  cin >> name;
  cout << "Enter player's score" << endl;
  cin >> score;


  do{ 
  cout << "Do you want to add a another player? (A)" << endl;
  cout << "Do you want to print players and scores? (P)" << endl;
  cout << "Do you want to remove a player? (R)" << endl;
  cout << "Do you want to exit? (E)" << endl;
  cout << "Enter A,P,R, or E" << endl;
  cin >> ans;

  numPlay = players.size();
  cout << numPlay;
  switch (ans)
  {
    case 'A':{
      play.addPlayer(numPlay,vector<Player> (players));
      break;
    }
    case 'P':{
      play.printPlayers(numPlay,vector<Player> (players));
      break;
    }
    case 'R':{
      play.removePlayer(numPlay,vector<Player> (players));
      break;
    }
    case 'E':{
      break;
    }
  }
  
  }
  while(ans == 'A' || ans == 'P' || ans == 'R') ;
  
}

