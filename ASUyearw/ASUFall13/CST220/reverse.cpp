/////////////////////////////////////////
// Austin Crothers
// CST220
// Reverse
// 10/21/13
/////////////////////////////////////////

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

const int WORDMAX = 500; // declares the maximum amount of chars the user can input
const int zero = 0; // creats a constant int of 0

string reverse(char word[WORDMAX])// creates the reverse function
{
  char first = 'f', last = 'l'; // creates a char for the first and last char of the users input
  char *head = &first, *tail = &last; //creates a pointer that points to the first and last char of users input
  int wordLength = (strlen(word));
  
  for(int i = zero; i < (wordLength/2); i++) //creates a loop to reverse the word, strlen gets the length of the string
  {
          head[zero] = word[i];// sets the first char in the string to the head pointer
          tail[zero] = word[wordLength - 1 - i]; //sets the tail to the last position of the string
          word[i] = *tail;// sets the tail to the head of the string
          word[wordLength - 1 - i] = *head;// sets the head to to the tail of the string
  }
   return word;// returns the new reversed word
}

int main()
{
    char word[WORDMAX]; // declares a char array to receive users input

    cout << "Enter in a word: ";
    gets(word);// gets all of the users input and stores it in the char word array
    
    cout << "You entered: " << word << endl ;
    string revWord = reverse(word); // calls the reverse word function 
    cout << "The reverse is: " << revWord << endl; // outputs the reversed word
    
    system("pause");
    return 0;
}
