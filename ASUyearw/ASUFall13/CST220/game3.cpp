#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

string pgName = "";
string pgTag = "";

class Player
{
      public: 
      Player();
      string pName, pTag[11];
      //char* pClass;
      string pClass;
      int health, armor, mresist, admg, mdmg;
      int getHealth();   // gets players initial health
      int setHealth();   // sets players initial health
      int getbHealth();  // updates players health during battle
      int setbhealth();  //updates player health during battle
      int setStats();
      int getStats();
};

class Enemy
{
      public:
      Enemy();
      string eName[6];
      int deathcount;
      int ehealth, earmor, emresist, eadamage, emdamage;
      int getEnemyStats();  //will be a fixed number for enemy damage
      int setEnemyStats();
};

class Battle
{
      public:
      Battle();
      int newpbhealth, result, ebdmg, btemp;//temp variables for battle
      int pbhealth, pbarmor, pbmresist, pbadmg, pbmdmg;//Player battle stats
      int ebhealth, ebarmor, ebmresist, ebadamage, ebmdamage;//enemy battle stats
      int getResult();   //gets the result of attacks
      int setResult();   //gets the result of attacks
      int updateHealth();
};       

//-------------------MAIN START---------------------------------
int main()
{
    Player P;                 //-------Sets Player Stats
    P.getHealth();
    P.health = P.setHealth();
    P.getStats();
    cout << pgName << pgTag <<" stats:" << endl << "Health: " << P.health << endl  
                        << "Armor: " << P.armor << endl
                        << "Magic Resist: " << P.mresist << endl
                        << "Attack Damage: " << P.admg << endl
                        << "Magic Damage: " << P.mdmg << endl << endl;
    
    Enemy E;                 //--------Sets Enemy Damage
    Battle B; 
    E.deathcount = 0;               //-------Monitors every battle
    B.newpbhealth = P.health;
    
    ////---PLAYER BATTLE STATS--
    B.pbhealth = P.health;
    B.pbarmor = P.armor;
    B.pbmresist = P.mresist;
    B.pbadmg = P.admg;
    B.pbmdmg = P.mdmg;
    ////---END PLAYER BATTLE STATS--
        
    while (B.newpbhealth > 0)
    {
     E.deathcount = E.deathcount + 1;
     ////---ENEMY BATTLE STATS--
     E.getEnemyStats();
     B.ebhealth = E.ehealth;
     B.ebarmor = E.earmor;
     B.ebmresist = E.emresist;
     B.ebadamage = E.eadamage;
     B.ebmdamage = E.emdamage;
     ////---END ENEMY BATTLE STATS--
     
     ////---GET BATTLE RESULTS---
     B.getResult();
     B.setResult();
     //B.updateHealth();
     
     cout << "//--------------------------------\\\\" << endl << endl;
     
     if (B.newpbhealth <= 0)
      {
       B.newpbhealth = 0;
       cout << "You now have " << B.newpbhealth << " health remaining" << endl;
       cout << "Congratulations you made it through " << E.deathcount << " enemies"
            << endl << endl;
      };
    };
    
    system("pause");
    return 0;
}
//------------------MAIN END--------------------------

//------------------PLAYER STATS----------------------
int Player::getHealth()
{
  health = 0;
  cout <<"Enter your slayers name: ";
  cin >> pName;
  cout << endl << "Are you a warrior, mage, or tank: ";
  cin >> pClass;
  for(int i = 0; pClass[i] != 0; i++)
   { pClass[i] = tolower(pClass[i]);}

  while (pClass != "warrior" && pClass != "mage" && pClass != "tank")
   {
    cout << "We have never heard of " << pClass << " try another: ";
    cin >> pClass;
    for(int i = 0; pClass[i] != 0; i++)
     { pClass[i] = tolower(pClass[i]);}
   };
  
  pTag[0] = " The Great"; pTag[1] = " The Unicorn Giant"; pTag[2] = " The Magician";
  pTag[3] = " The Wise"; pTag[4] = " The Grey"; pTag[5] = " The Tiny Goldfish";
  pTag[6] = " The German Monster"; pTag[7] = " The Spinless"; pTag[8] = " The Strong";
  pTag[9] = " The Beast"; pTag[10] = " The Jedi";
  
  srand (time(NULL));
  int x = rand() % 11;
  
  cout << endl <<"Welcome to the battle grounds " << pName << pTag[x] << "." << endl
       <<"The kingdom is under attack from an evil army!" << endl
       <<"We need you to hold off the enemies for as long as possible."
       << endl << endl;
       
   pgName = pName;
   pgTag = pTag[x];    
  
  while(health < 50 || health > 2000)
   {   
    cout << "Enter a health value between 50 and 2000: ";
    cin >> health;
    cout << endl << endl;
   };
}

int Player::setHealth()
{
    return health;
}

//-----------STAT RANDOMIZER---------
int Player::getStats()
//=====Highest stat amount aloud is 1000, lowest is 1
{
    srand (time(NULL)); // random number time null
    
    if (health == 50)
    {
     armor = rand() % 350 + 650;
     mresist = rand() % 350 + 650;
     admg = rand() % 350 + 650;
     mdmg = rand() % 350 + 650;
    };
     
    if (health >= 51 && health <= 200)
    {
     armor = rand() % 250 + 450;
     mresist = rand() % 250 + 450;
     admg = rand() % 250 + 450;
     mdmg = rand() % 250 + 450;
    };
     
    if (health >= 201 && health <= 500)
    {
     armor = rand() % 150 + 350;
     mresist = rand() % 150 + 350;
     admg = rand() % 150 + 350;
     mdmg = rand() % 150 + 350;
    };
     
    if (health >= 501 && health <= 1000)
    {
     armor = rand() % 400 + 150;
     mresist = rand() % 400 + 150;
     admg = rand() % 400 + 150;
     mdmg = rand() % 400 + 150;
    };
     
    if (health >= 1001 && health <= 1200)
    {
     armor = rand() % 200 + 150;
     mresist = rand() % 200 + 150;
     admg = rand() % 200 + 150;
     mdmg = rand() % 200 + 150;
    };
     
    if (health >= 1201 && health <= 1400)
    {
     armor = rand() % 200 + 100;
     mresist = rand() % 200 + 100;
     admg = rand() % 200 + 100;
     mdmg = rand() % 200 + 100;
    };
     
    if (health >= 1401 && health <= 1600)
    {
     armor = rand() % 175 + 75;
     mresist = rand() % 175 + 75;
     admg = rand() % 175 + 75;
     mdmg = rand() % 175 + 75;
    };
     
    if (health >= 1601 && health <= 1949)
    {
     armor = rand() % 100 + 50;
     mresist = rand() % 100 + 50;
     admg = rand() % 100 + 50;
     mdmg = rand() % 100 + 50;
    };
     
    if (health >= 1950 && health <= 2000)
    {
     armor = rand() % 50 + 1;
     mresist = rand() % 50 + 1;
     admg = rand() % 50 + 1;
     mdmg = rand() % 50 + 1;
    };
    
    if (pClass == "warrior")
     admg = admg + 150;
    if (pClass == "mage")
     mdmg = mdmg + 150;
    if (pClass == "tank")
     health = health + 150;
}//-----------STAT RANDOMIZER END---------

Player:: Player()
{}
//-----------------END PLAYER STATS--------------------

//----------------ENEMY STATS--------------------------
int Enemy::getEnemyStats()
{
    int count = 1;
    int minstats = 1;
    int maxstats = 50;
    
    if (count == 1)
     {
      maxstats = (deathcount*50);
      minstats = (deathcount*25);
      
      ehealth = rand() % maxstats + minstats;
      earmor = rand() % maxstats + minstats;
      emresist = rand() % maxstats + minstats;
      eadamage = rand() % maxstats + minstats;
      emdamage = rand() % maxstats + minstats;
     };
     
    //if enemy is defeated increase higher chances on enemy stats
     //++++use a variable to increase the random amounts
    //add in a boss after certain amount of enemies are defeated
}

int Enemy::setEnemyStats()
{
    return eadamage;
}

Enemy::Enemy()
{}
//-------------END ENEMY STATS-------------------------

//-------------BATTLE TIME----------------------------
int Battle::getResult()
{   
    char atkChoice = 'n';
    char battlesequence = 'c';
    result = 1;
    int enemyrandatk = 0;
    //--------PLAYER BATTLE STATS-------------
    int pbhealthtemp = pbhealth;
    int pbarmortemp = pbarmor;
    int pbmresisttemp = pbmresist;
    int pbadmgtemp = pbadmg;
    int pbmdmgtemp = pbmdmg;
    if (newpbhealth < pbhealthtemp)
        pbhealthtemp = newpbhealth;
    //--------PLAYER BATTLE STATS END---------
    
    //--------ENEMY BATTLE STATS--------------
    int ebhealthtemp = ebhealth;
    int ebarmortemp = ebarmor;
    int ebmresisttemp = ebmresist;
    int ebdamagetemp = ebadamage;
    int ebmdamagetemp = ebmdamage;
    cout << "Your enemy stats:" << endl << "Health: " << ebhealth << endl
                        << "Armor: " << ebarmor << endl
                        << "Magic Resist: " << ebmresist << endl
                        << "Attack Damage: " << ebadamage << endl
                        << "Magic Damage: " << ebmdamage << endl << endl;
    
    cout << "   FIGHT!" << endl;
    //--------ENEMY BATTLE STATS END----------
    
    //--------BATTLE CALCULATIONS---------
    pbadmgtemp = (pbadmgtemp - ebarmortemp);
    pbmdmgtemp = (pbmdmgtemp - ebmresisttemp);
    ebdamagetemp = (ebdamagetemp - pbarmortemp);
    ebmdamagetemp = (ebmdamagetemp - pbmresist);
    
    if (pbadmgtemp < 0)
     pbadmgtemp = 1;
    if (pbmdmgtemp < 0) 
     pbmdmgtemp = 1;
    if (ebdamagetemp < 0)
     ebdamagetemp = 1;
    if (ebmdamagetemp < 1)
     ebmdamagetemp = 1;
    //--------BATTLE CALCULATIONS END------ 
    
    //-----FIGHT WHILE HEALTH IS > 0-------              
    while (result > 0)
     {
      while (battlesequence == 'c')
       {    
        cout << "Attack 'a', Magic Attack 'm'";
        cin >> atkChoice;
        cout << endl;
        
     //-------ATTACK DAMAGE-------------------
        if (atkChoice == 'a')
         {            
           btemp = (ebhealthtemp - pbadmgtemp);
           ebhealthtemp = btemp;         
         };
      //-------ATTACK DAMAGE END----------------  
       
      //------MAGIC DAMAGE-----------------
        if (atkChoice == 'm')
         {          
           btemp = (ebhealthtemp - pbmdmgtemp);
           ebhealthtemp = btemp;         
         };
     //------MAGIC DAMAGE END-------------
     
     //------ENEMY TURN-----------------           
           if (ebhealthtemp <= 0) //checks to see if the enemy has been slain
            {
             cout << "You have slain the enemy" << endl << endl;
             result = 0;
             battlesequence = 'f';
            };
             
           if (ebhealthtemp > 0) //if the enemy is not slain do an attack randomizer
             {
              cout << "Enemy HP: " << ebhealthtemp << endl;      
              enemyrandatk = rand() % 1;
              
               if (enemyrandatk == 0)
                {
                 btemp = (pbhealthtemp - ebdamagetemp);
                 pbhealthtemp = btemp;
                 result = btemp;
                };
              
               if (enemyrandatk == 1)
                {
                 btemp = (pbhealthtemp - ebmdamagetemp);
                 pbhealthtemp = btemp;
                 result = btemp;
                };
              };
     //----END ENEMY ATTACK-----------------------------
     
     //----END OR CONTINUES BATTLE AND DISPLAYS HEALTH---
          if (result <= 0)
          {
           result = 0;
           battlesequence = 'f';
          };
          
          if (atkChoice != 'a' && atkChoice != 'm')
           atkChoice = 'n';
          else
           {
            newpbhealth = pbhealthtemp;
            if (pbhealthtemp < 0)
             pbhealthtemp = 0;
            cout << pgName << pgTag << " HP: " << pbhealthtemp << endl << endl; 
           };
     //-------------------------------------------------
        };
     };
}
//-----------END HEALTH GREAT THAN 0----------------

int Battle::setResult()
{
    return newpbhealth;
}

Battle::Battle()
{}
//--------------END BATTLE TIME----------------------
