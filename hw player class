#include <iostream>
#include "Player.h"

using namespace std;

class Player{
public:
    
    Player();   
    Player(string n, int h, int l, int s); 
    
    // getter functions often use const to make the function read-only
    string getname() const;    
    int gethealth() const;
    int getlevel() const;    
    int getscore() const;
    
    // setter functions
    void setname(string n);    
    void sethealth(int h);
    void setlevel(int l);    
    void setscore(int s);
    
private:
    string name;
    int health;
    int level;
    int score;
};

Player::Player(){
    name = "null";
    health = 0;
    level = 0;
    score = 0;

Player::Player(string n, int h, int l, int s){
    name = n;
    health = h;
    level = l;
    score = s;
}
//gets
string Player::getname() const{
    return name;
}

int Player::gethealth() const {
    return health;
}

int Player::getlevel() const{
    return level;
}

int Player::getscore() const {
    return score;
}
//sets
void Player::setname(string n){
    name = n;
}

void Player::sethealth(int h){
    health = h;
}

void Player::setlevel(int l){
    level = l;
}

void Player::setscore(int s){
    score = s;
}

int main()
{

    Player pl5("Roder", 98, 77, 193443);  
    cout << "Player 5 Name: " << pl5.getname() << ", and health: " << pl5.gethealth() <<", Level: " << pl5.getlevel() << ", and score: " << pl5.getscore() << endl; 
 
 
    Player pl6;     
    pl6.setname("Dave");    
    pl6.sethealth(45);
    pl6.setlevel(209);    
    pl6.setscore(654354);
    
    cout << "Player 6 Name: " << pl6.getname() << ", and health: " << pl6.gethealth() <<", Level: " << pl6.getlevel() << ", and score: " << pl6.getscore() << endl; 
    return 0;
}
