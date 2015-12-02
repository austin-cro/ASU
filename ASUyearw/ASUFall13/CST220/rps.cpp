/////////////////////////////////////////
// Austin Crothers
// CST220
// Rock, Paper, Scissors
// 9/12/13
/////////////////////////////////////////

#include <iostream>
#include <string>
#include <locale>

int main()
{
    //char P1 = ' ',P2 = ' '; //gives player 1 and player 2 a char value
    int P1Score = 0, P2Score = 0; // sets both players scores to 0
    char PlayAgain = 'y'; // the char that decides if the player wishes to play again
    
  while (PlayAgain == 'y') // the while loop that reads if the user wishes to play again
  {
    char P1 = ' ',P2 = ' '; //gives player 1 and player 2 a char value 
    
    while ((P1 != 'r') && (P1 != 'p') && (P1 != 's'))
    {
    std::cout << "Player 1: Please enter either (R)ock, (P)aper, or (S)cissors: " ; //asks player 1 for input
    std::cin >> P1 ; //records player 1 input
    P1 = tolower(P1); //sets player 1 input to lowercase letter
    }
    
    while ((P2 != 'r') && (P2 != 'p') && (P2 != 's'))
    {
    std::cout << "\n";// gives a space between player 1 and player 2, just looks better         
    std::cout << "Player 2: Please enter either (R)ock, (P)aper, or (S)cissors: " ;//asks player 2 for input
    std::cin >> P2;//records player 2 input
    P2 = tolower(P2);//sets player 2 input to lowercase letter
    std::cout << "\n";// gives a space between score display, just looks better
    }
    
    if (P1 == 'r' && P2 == 'p') // paper beats rock
    {
           std::cout << "Player 2 wins!" << "\n";
           P2Score = P2Score + 1;//increment winning players score
    }
    
    if (P1 == 'r' && P2 == 's') //rock beats scissor
    {
           std::cout << "Player 1 wins!" << "\n";
           P1Score = P1Score + 1;//increment winning players score
    }
        
    if (P1 == 'r' && P2 == 'r') //rock ties with rock
    {
           std::cout << "Tie" << "\n";
    }
    
    if (P1 == 'p' && P2 == 'p') //paper ties with paper
    {
           std::cout << "Tie" << "\n";
    }
    
    if (P1 == 'p' && P2 == 's') // scissors beats paper
    {
           std::cout << "Player 2 wins!" << "\n";
           P2Score = P2Score + 1;//increment winning players score
    }
    
    if (P1 == 'p' && P2 == 'r') // paper beats rock
    {
           std::cout << "Player 1 wins!" << "\n";
           P1Score = P1Score + 1;//increment winning players score
    }
    
    if (P1 == 's' && P2 == 'p') //scissors beat paper
    {
           std::cout << "Player 1 wins!" << "\n";
           P1Score = P1Score + 1;//increment winning players score
    }    
    
    if (P1 == 's' && P2 == 's') // scissors ties with scissors
    {
           std::cout << "Tie" << "\n";
    }    
    
        if (P1 == 's' && P2 == 'r') //rock beats scissors
    {
           std::cout << "Player 2 wins!" << "\n";
           P2Score = P2Score + 1; //increment winning players score
    }    
    
    std::cout << "Player 1 Score: " << P1Score << "\n"; //output player 1 score
    std::cout << "Player 2 Score: " << P2Score << "\n"; //output player 2 score
    std::cout << "\n";// gives a space between scores and play again, just looks better
    std::cout << "Play Again? (Y/N): "; //asks the user if they would like to play again
    std::cin >> PlayAgain; //recieves players input
    PlayAgain = tolower(PlayAgain); //sets input to lower case
    std::cout << "\n"; //provides space between inputs
     
   }
    system("pause");
    return 0;
}
