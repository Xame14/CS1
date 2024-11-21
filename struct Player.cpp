#include <iostream>
using namespace std;

struct Player{
    string name;
    int health;
    int level;
    int score;
};

Player Player_Defult(){
    Player r = {"Null",100,0,0};
    return r;
}

Player Player_Defult(String n, int h, int l, int s){
    Rectangle r = {n,h,l,s};
    return r;
}

string getname(const Player pl){
    return pl.name;
}

int gethealth(const Player pl){
    return pl.health;
}

int getlevel(const Player pl){
    return pl.level;
}

int getscore(const Player pl){
    return pl.score;
}

void setname(Player& pl, string name){
    pl.name = name;
}

void sethealth(Player& pl, int health){
    pl.health = health;
}

void setlevel(Player& pl, int level){
    pl.level = level;

void setscore(Player& pl, int score){
    pl.score = score;
}

int main()
{
    Player pl;
    pl.name = "Yoma";
    pl.health = 64;
    pl.level = 300;
    pl.score = 102503
    cout<<"Player 1: name: "<< pl.name<< "health: "<<pl.health<<" level: "<<pl.level<<"score: "<<pl.score<<endl;
    
    Player pl2 = Player_Defult();
    cout<<"Player 2: name: "<< pl2.name<< "health: "<<pl2.health<<" level: "<<pl2.level<<"score: "<<pl2.score<<endl;
    
    
    Rectangle rec3 = Rectangle_Defult(8.5,1.0);
    cout<<"Player 3: name: "<< pl3.name<< "health: "<<pl3.health<<" level: "<<pl3.level<<"score: "<<pl3.score<<endl;
    
    string n = "Duld";
    int h = 98;
    int l = 7;
    int s = 14;
    Player pl4 = Rectangle_Defult(n,h,l,s);
    cout<<"Player 4: name: "<< pl4.name<< "health: "<<pl4.health<<" level: "<<pl4.level<<"score: "<<pl4.score<<endl;
    
    Player pl5 = Rectangle_Defult("Sandy",19,87,2000123);
    cout<<"Player 5: name: "<< pl5.name<< "health: "<<pl5.health<<" level: "<<pl5.level<<"score: "<<pl5.score<<endl;
    
    Player pl6;
    setname(pl6, "rolly");
    sethealth(pl6,50);
    setlevel(pl6, 54);
    setscore(pl6,123487654);
    cout<<"Player 6: name: "<< pl6.name<< "health: "<<pl6.health<<" level: "<<pl6.level<<"score: "<<pl6.score<<endl;
    

    return 0;
}
