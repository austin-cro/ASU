/////////////////////////////////////////
// Austin Crothers
// CST220
// Student
// 9/12/13
/////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student// creates a student class
{
      public:       
       Student()//creates a student function with the variables
       {
        name;
        numClasses;
        classList;
       }

       string name;
       int numClasses;
       string classList;
     
};

string getStudentName()//promts the user to enter in a name
{    
    Student StudentName;
    cout << "Enter Name:";
    getline(cin,StudentName.name);
    string name = StudentName.name;
    return name;
}

int getClassNumber(int& CN)//promts the user to enter in the number of classes the student is taking
{   
    Student ClassNumber;
    const int MAXCLASS = 16;//declares the maximum number of classes a student can take
    
    cout << "Enter number of classes you are taking: ";

	while(!(cin >> ClassNumber.numClasses))// makes it so only numbers can be received as an input
    { 
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Input not valid, Enter the number of classes you are taking: ";
	}
 
    if(ClassNumber.numClasses >= MAXCLASS)//this statement creats a default number of classes if MAXSIZE is exceeded
    {
     cout << "The maximum number of classes is 15. Enter in your 15 classes." << endl;
     ClassNumber.numClasses = MAXCLASS - 1;
    }
    
     int ClassMax = ClassNumber.numClasses;//sets the number of classes being taken
     CN = ClassMax;
     return CN;
}

void setOutPut(void)
{  
    const int MAXCLASS = 16; // sets the Maximum value of classes
    int CN = 0;
    Student StudentName;
    Student ClassNumber;
    StudentName.name = getStudentName();// sets value of name
    
    int ClassMax = getClassNumber(CN) - 1; // because the number starts at 0 you must subtract 1 from it to get an accurate number
    Student ClassList[MAXCLASS];
    cin.ignore(); 
    
    for(int i = 0; i <= ClassMax; i++)// this loop assigns the values in the array of classlist
    {
    cout << "Enter in your class name and then hit enter: ";
    getline(cin,ClassList[i].classList);
    }

    cout << endl <<"Student Name: "<< StudentName.name << endl << "Number of classes: " << ClassMax + 1 << endl << "Class List:" << endl;
    
    for(int c = 0; c <= ClassMax; c++)// this displays the numbers on the class list
    {
     cout << "Class " << c+1 << ": " << ClassList[c].classList << endl;
    }
}

int main()
{   
    char EnterAgain = 'y';
    
    while (EnterAgain == 'y')
     {
      setOutPut();
      cout << endl << "Would you like to enter in another student(y/n)? ";
      cin >> EnterAgain;
      while(EnterAgain != 'y' && EnterAgain != 'n' )
      {
       cout << "Invalid Answer, Enter another student(y/n)? ";
       cin >> EnterAgain;
      }
      
      cout << endl;
      cin.ignore();
     }//end of while loop 

    system("pause");
    return 0;
}

