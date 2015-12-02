/////////////////////////////////////////
// Austin Crothers
// CST220
// htmlConvert
// 11/20/13
/////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

    const int SIZE = 100;//declares a constant int 

int main()
{

    char fileName[SIZE], ch; // creates a filename char
    
    fstream dataFile;// creates and fstream called dataFile
    ifstream inFile;// creates an ifstream called inFile  
     
    ofstream outFile("NewFile.txt");// creates what the file name will be once created

    cout << "Enter in file name: ";// asks the user to enter in a file name
    cin >> fileName;// stores the users input into fileName
    
    inFile.open(fileName);// opens the file for storing
    
    if(!inFile) // if the file is not found we close the program
    {
      cout << "Cannot open " << fileName << endl;
      system("pause");
      return 0;
    }
    
    cout << "Opening File" << endl;
    
    outFile << "<PRE>" << endl << endl; // outputs this before the rest of the code
    
    inFile.get(ch);//gets the first char from the file
    while(!inFile.eof()) //goes through each char until the end of the file
    {
                
       if (ch == '<') // if the char is this symbol it will write 
         outFile << "&lt";
       else if (ch == '>')// if the char is this symbol it will write 
         outFile << "&gt";
       else
          outFile << ch;
        
       inFile.get(ch);// finds the last char it is at
    }
    
    outFile << endl << "</PRE>";//out puts this at the end of the file
    
    inFile.close();//closes the inFile
    outFile.close();//closes the outFile
    
    cout << "File created" << endl;
    
    system("pause");
    return 0;
}
 
