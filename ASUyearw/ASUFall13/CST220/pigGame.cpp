/////////////////////////////////////////
// Austin Crothers
// CST220
// Pig Game
// 9/12/13
/////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int FinalScore = 100;// declares the final score that must be reached
int humanTotalScore = 0, computerTotalScore = 0 , currentScore = 0, compRollScore = 0, compCurrentScore = 0, scoreReset = 0, compRollScoreMax = 20; //initiates all values needed
int diceRoll(); // sets the function dice role
int humanTurn(int& humanTotalScore); // creates the function humanTotalScore
int computerTurn(int& computerTotalScore); // creates the function computerTotalScore

int main()
{       
    while((humanTotalScore <= FinalScore) && (computerTotalScore <= FinalScore))// makes it so the functions continously run untill the final score is reached
    {
    humanTurn(humanTotalScore);// tells main to call human function
    computerTurn(computerTotalScore);//tells main to call the computer function
    }
    
    if (humanTotalScore >= FinalScore)// this displays the outcome of the game if the human wins
    {
       cout << "Congratulations! you won with a score of: " << humanTotalScore << endl ;
       cout << "The computers score was: " << computerTotalScore << endl ;
    }
    
    if (computerTotalScore >= FinalScore)// this displays the outcome fo the game if the computer wins
    {
       cout << "The computer won this time with a score of: " << computerTotalScore << endl ;
       cout << "Your score was: " << humanTotalScore << " Goodluck next time!" << endl ;
    }    
    
    system("pause");
    return 0;
}

int humanTurn(int& humanTotalScore)// humanscore function
{
    int lastRoll = 1;// store the humans last roll in this variable
    char roll = 't'; // intitiates the roll or hold selection
    
    while ((roll != 'r') && (roll != 'h'))// this ensures that the input only excepts r or h as inputs
    {
     cout << "It's your turn! press 'r' to roll, or 'h' to hold: ";
     cin >> roll; // gets users input of rolling or holding
     roll = tolower(roll); // sets users input to lowercase
    }
    
    while (roll == 'r')//if user selects r this instantiates the roll function
    {
          srand (time(NULL));
          lastRoll = diceRoll();//calls the dice roll
          
          if (lastRoll == 1)//if the users roll is 1 then it displays the output
          {
             cout << "You rolled a 1, end of turn." << endl;
             cout << "Your total score is: " << humanTotalScore << endl << endl;
             cout << "It is now the computers turn." << endl;
             currentScore = scoreReset;// resets the users current score to 0
             break;
          }
             
          else
          {
              currentScore += lastRoll;//adds the last roll to the players current score
              cout << "You rolled a " << lastRoll << ". Your current total score is now: " << currentScore << endl << endl;// displays users roll and current score
              cout << "Press 'r' to roll, or 'h' to hold: ";//asks for user input
              cin >> roll;// gets users input to hold or roll again
              roll = tolower(roll);//lowerscases user input 
          }
    }
    while (roll == 'h')//if the user choses to hold this is called
    {
          humanTotalScore += currentScore;//adds current score to the total score
          currentScore = scoreReset;//resets current score to 0
          cout << "Your total score is: " << humanTotalScore << endl << endl; // displays the total score
          cout << "It is now the computers turn." << endl; //explains that it is the computers turn
          break;
    }
    
    
}

int computerTurn(int& computerTotalScore)// runs when it is the computers turn
{   
    int compLastRoll;// interger for what the computer rolls
          
    while(computerTotalScore < FinalScore) //this runs the computers turn unless the computer has reached 100 points or more
    { 
         
         compLastRoll = diceRoll();//sets the computers roll to the dice roll function
         compRollScore += compLastRoll;//adds the computers roll scores together
         
         if (compLastRoll == 1)//if the computer rolls 1 it dispays what happens
         {
             cout << "Computer rolled a 1 end of turn." << endl;
             cout << "Computer total score is: " << computerTotalScore << endl << endl;
             compCurrentScore = scoreReset;// resets the computer current score to 0
             compRollScore = scoreReset;//resets the computer roll score to 0
             break;
         }
                          
         else// if the computer rolls anything except for a 1 this statement runs
            {
             compCurrentScore += compLastRoll;// adds the computers last roll to the current score
             cout << "The computer rolled a " << compLastRoll << ". The computer current score is now: " << compCurrentScore << endl << endl; 
             
            }
            
         if(compRollScore >= compRollScoreMax)//the computer will chose to hold at 20 or more points so rollscoremax is set to 20
         {
            computerTotalScore += compCurrentScore;//this adds the current score to the total score
            compRollScore = scoreReset;//resets the roll score to 0
            compCurrentScore = scoreReset;// resets the current score to 0
            cout << "The computer choses to hold. Computer total score is: " << computerTotalScore << endl << endl;
            break;

         }
         
    }
}


int diceRoll()
{
    int roll = (int)(rand()%6) + 1;//sets random numbers to 1-6
    return roll;// returns what the user rolled
}
             
 
