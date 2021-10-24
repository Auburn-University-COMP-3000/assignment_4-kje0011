#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
 private:
   string name;
   int score;

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
  
};

int main() {
  Player play;
  char ans;
  string name = "";
  int score = 0;
  int numPlay = 0;
  vector<Player> players; 

  do{ 
  cout << "Do you want to add a player? (A)" << endl;
  cout << "Do you want to print players and scores? (P)" << endl;
  cout << "Do you want to remove a player? (R)" << endl;
  cout << "Do you want to search for a player? (S)" << endl;
  cout << "Do you want to exit? (E)" << endl;
  cout << "Enter A,P,R,S, or E" << endl;
  cin >> ans;

  switch (ans)
  {
    case 'A':{
     numPlay = players.size();
     if (numPlay == 10){
       cout << "Player array full." << endl;
     }
     else{
       cout << "Enter player name" << endl;
       cin >> name;
       cout << "Enter player score" << endl;
       cin >> score;
       Player newPlayer(score, name);
       players.push_back(newPlayer);
       numPlay++;
     }
      break;
    }
    case 'P':{
      cout << "Player Scores" << endl;
     for (int i=0; i < numPlay; i++)
      cout << players[i].getName() << " " << players[i].getScore() << endl;
      break;
    }
    case 'R':{
      
      cout << "Enter player name to remove" << endl;
      cin >> name;
      int nameLoc = -1;
      for (int i = 0; i < players.size(); i++){
        if (name == players[i].getName()){
          nameLoc = i;
          break;
        }
     }
      if(nameLoc != -1){
        players.erase(players.begin() +nameLoc);
      }
      else {
        cout << "No players removed." << endl;
      }
      break;
    }
    case 'S':{
      string nameSearch = "";
      bool nameFound = false;
      cout << "Enter a player name to search for their score." << endl;
      cin >> name;
      for (int i = 0; i < players.size(); i++){
        if (name == players[i].getName()){
          cout << "Score:" << players[i].getScore() << endl;
          nameFound = true;
          break;
        }
      }
      if(!nameFound){
        cout << "There is no player with this name." << endl;
      }
    }
    break;
    case 'E':{
      break;
    }
  }
  
  }
  while(ans == 'A' || ans == 'P' || ans == 'R' || ans == 'S') ;
  
}

