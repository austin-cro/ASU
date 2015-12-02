//File Name: html;Convert.cpp
//Author: Andrew Hall
//Email Address: ahall6@asu.com
//Assignment Number: 5
//Assignment Name: File I/O
//Description: This program asks the user to input a .cpp file then converts
//             it to html and allows it to be viewed on a web page.
//                 

/*
Algorithm:
    1. Export to the file                
    2. Bring the strings from the file and print to screen
    3. Replace symbols
    4. add tags
    5. Export to 2nd file
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//function that converts c++ characters to html friendly characters.
void convertFile(ifstream& originalFile, ofstream& newFile)
{
    char myChar;
    
    if (originalFile.is_open())
    {
      newFile << "<PRE>" << endl;
    
        while(!originalFile.eof())
        {
                originalFile.get(myChar);
                if(myChar == '<')
                    newFile << "&lt;";
                else if(myChar == '>')
                    newFile << "&gt;";
                else 
                    newFile << myChar;
        }
        
      newFile << "</PRE>" << endl << endl;
    }
}

int main()
{

    char input[24];

    cout << "This program reads in a c++ source file and then converts it so\n"
         << "the whitespace and formatting is preserved in an html document.\n"
         << "\n";
    cout << "Please Enter a .cpp File Name: ";
    cin >> input;
    
ifstream originalFile(input);
    
    //Informs the user the file has opened or failed
    if(originalFile.fail())
    {
        cout << "File failed to open." << endl;
        exit(1);
    }
    else
        cout << "File opened successfully." << endl;
        
    //Creates the html file
    ofstream newFile("cfile2.html");
    
    //Sends the converted file to the html file
    convertFile(originalFile, newFile);
        
    originalFile.close();

system("pause");
     
}
