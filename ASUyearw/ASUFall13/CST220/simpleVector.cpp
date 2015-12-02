///////////////////////////
//Austin Crothers
//Simple Vector
/////////////////////////
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    int choice; //declares an integer called choice
    char again = 'y';//declares a char
    
    while (again == 'y') //a while loop for the user to enter in multiple data types
    {
    cout << "What type of data would you like to enter?" << endl  // asks the user what they would like to input
         << "1.integer  2.double  3.string" << endl << "Enter your choice: ";
    cin >> choice; // gets the users input
    
    if (choice == 1)
    {
      int intnumbers;         
      cout << "How many numbers do you want to enter: ";// asks the user how many ints they want to enter
      cin >> intnumbers;
      int numArr[intnumbers];
      for (int i = 0; i < intnumbers; i++) //this loop stores the users inputs in the array
      {
          cout << "Enter number " << (i+1) << ": ";
          cin >> numArr[i];
      }
      
    }
    if (choice == 2)
    {
      int dubnumbers;         
      cout << "How many numbers do you want to enter: ";// asks the user how many doubles they want to enter
      cin >> dubnumbers;
      double dubArr[dubnumbers];
      for (int i = 0; i < dubnumbers; i++)//this loops stores the users inputs in the array
      {
          cout << "Enter number " << (i+1) << ": ";
          cin >> dubArr[i];
      }
    }            
    if (choice == 3)
    {
      int stringAmt;         
      cout << "How many words do you want to enter: ";// asks the user how many strings they want to enter
      cin >> stringAmt;
      string stgArr[stringAmt];
      for (int i = 0; i < stringAmt; i++)//this loop stores the users inputs in the array
      {
          cout << "Enter word " << (i+1) << ": ";
          cin >> stgArr[i];
      }
    }    
     cout << "Would you like to enter in another set of numbers (y/n)? "; // asks the user if they want to enter in new data
     cin >> again;
    }  
    
    system("pause");
    return 0;
}
