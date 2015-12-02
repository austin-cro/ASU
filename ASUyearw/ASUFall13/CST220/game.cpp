#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class Player
{
      public:
       Player();
       string& setName();
       string getName() const;
       int& setHealth();
       int getHealth() const;
       int health;
       void print();   
       
       //friend class Battle;
       
      private:
       string name;
       int armor, admg, mdmg;
       
};

class Enemy
{
      public:
       Enemy();
       string& setEname();
       string getEname()const;
       int setHealthE();
       int getHealthE();
       void printE();   
       int healthE, armorE, admgE, mdmgE; 
       
      private:
       string ename;
 
};

class Battle: public Player
{
      public:
       Battle();
       void printB();
       int newHealthE;
       int newHealthP;
       int setBhealth();
       
       //friend class Player;

};

////////////////////MAIN/////////////////////
int main()
{
 
    Player P;
    P.print();
    
    Enemy E;
    E.printE();
    
    Battle B;
    B.printB();

    system("pause");
    return 0;
}
////////////////////END MAIN//////////////

/////////////PLAYER////////////////////
string& Player::setName()
 { 
     cout << "Enter your slayers name: ";
     cin >> name;
 }
 
string Player::getName() const
 {
     return name;
 }

int& Player::setHealth()
 {
     cout << "Enter a health value 50-2000: ";
     cin >> health;     
 }
 
int Player::getHealth() const
 {
     return health;
 }

Player::Player()
 {
   //setName();
   //setHealth();
 }

void Player::print()
 {    
     setName();
     setHealth();
     cout << "Welcome " << name << " You have " << health << " health points" ;
 }
////////////END PLAYER////////////////

///////////////ENEMY////////////////
string& Enemy::setEname()
{
   ename = "Dragon";
}
string Enemy::getEname() const
{
   return ename;    
}
int Enemy::setHealthE()
{
    healthE = 100;
}

int  Enemy::getHealthE()
{
   return healthE;
}

Enemy::Enemy()
 {
   setEname();
   setHealthE();
 }
void Enemy::printE()
 {
     cout << endl << endl << "Enemy: " << ename << endl
          << "Health Points: " << healthE << endl << endl ;
 }
/////////////END ENEMY/////////////////

//////////////BATTLE TIME//////////////////////////
Battle::Battle()
 {   
     setBhealth();     
 }

int Battle::setBhealth()
{
    Enemy E;
    Player PB;
    char A = 'y', Attack = 'p';
    int AttackE = 1;
    newHealthE = E.healthE;
    newHealthP = PB.health;
    cout << "Attack Dragon?";
    cin >> A;
    if (A == 'y')
    {
     cout << "'p' for physical attck, 'm' for magic attack,"
          << " 'd' for defence stance." << endl << endl;
     while (A == 'y')
     {
      cout << "Enter Attack Choice: ";
      cin >> Attack;
      if(Attack == 'p')
      {     
      newHealthE = newHealthE - 5;
      printB();
      }
      if(Attack == 'm')
      {     
      newHealthE = newHealthE - 10;
      printB();
      }
      if(Attack == 'd')
      {     
      newHealthE = newHealthE;
      printB();
      }
      if (AttackE == 1)
      {
        cout << "The enemy attacks!";
        newHealthP = newHealthP - 5;
        cout << "You have " << newHealthP << " left. " << endl;
      }
      cout << "Attack Dragon?";
      cin >> A;
     }
    }
    
    if (A == 'n')
    {
      cout << "You ran away";
    }
    
    return newHealthE;
}

void Battle::printB()
{ 
     cout << newHealthE << endl << endl;
}
///////////////END BATTLE TIME//////////////////////////
