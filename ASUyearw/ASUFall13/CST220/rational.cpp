/////////////////////////////////////////
// Austin Crothers
// CST220
// Rational
// 9/12/13
/////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Rational// creates a class for rational numbers
{
          int numerator, denominator;
          
   public:

     
     int setNumerator()//asks the user to enter in a numerator
      {
         cout << "Enter in the numerator: ";
         cin >> numerator;
         return numerator;
     }
     
     int setDenominator()//askes the user to enter in a denominator
     {   
         cout << "Enter in the denominator: ";
         cin >> denominator;
         return denominator;
     }

     friend ostream& operator << (ostream& os, Rational& userOutput);//sets up operator overloading for <<
     friend istream& operator >> (istream& is, Rational& userInput);//sets up operator overrloading for >>
};

istream& operator >> (istream& is, Rational& userInput)//creates the function for the overload and askes for the users input
{
    int num = userInput.setNumerator();
    int den = userInput.setDenominator();
    cout << num << "/" <<  den << endl;

}
     
ostream& operator << (ostream& os, Rational& userOutput)//creates the function for the overload
{

    //return os << userInput.&num << "/" <<  &den ;    
    //return the reference to your object
}

int main()
{   
    Rational userNumber, userValues;//, SN, SD;
    
    cin >> userValues;
    cout << userNumber;
    
    system("pause");
    return 0;
    
}
