///////////////////////////
//Austin Crothers
//11/21/13
//date
/////////////////////////

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Date// creates a date class that contains gets and sets for dates
{
      public:
      int getMonth() const;
      int setMonth();
      void invalidMonth();
      int getDay() const;
      int setDay();
      void invalidDay();
      int getYear() const;
      int setYear();
      string setMonthName();
      
      int month,day,year;
      string monthName;
      
      void print1();
      void print2();
      void print3(); 
      Date() {};
};

void Date::invalidMonth()// creates a function to not allow an invalid month
{
     try // trys the users input for the month
     {    
          int userMonth;
          cout << "Enter in the number of a month: ";
          cin >> userMonth;
          
          if(userMonth > 12 || userMonth < 1)//checks to see if the users month is inbetween 1-12
             throw userMonth;
             
          month = userMonth;
     }
     catch(int e) // if the month is invalid this catches it
     {
        cout << e << " is not a valid month" << endl;
     }
};

int Date::setMonth()// runs the function that asks the user to set the month
{
    invalidMonth();
};

int Date::getMonth() const //gets the month number
{
    return month;
};

void Date::invalidDay()// asks the user to enter a number and checks to see if it is valid
{
     try//asks the user to enter in the day and check the input
     {
          int userDay;
          cout << "Enter in the number of a day in that month: ";
          cin >> userDay;
          
          if (userDay > 31 || userDay < 1)// check to see the users input is inbetween 1 and 31
           throw userDay;
           
          day = userDay;
          }
     catch(int e)//if the day is not valid then it ouputs this error
     {
          cout << e << " is not a valid day." << endl;
     };
};

int Date::setDay()//calls the function to ask the user to set the day value
{
    invalidDay();
};    

int Date::getDay() const// returns the value of day
{
    return day;
};

int Date::setYear()//asks the user to input the year, if the year is below 0 is throws an error
{ 
    try// prompts user to enter in the year
    {
     int userYear;
     cout << "Enter in the year: ";
     cin >> userYear;
     if (userYear < 0)
      throw userYear;
      
     year = userYear;
    }
    catch(int e)//does not allow the user to enter a number below 0
    {
      cout << e << " is not a valid year" ;
      year = 1; //sets year to a default number is a catch is called
    }; 
};

string Date::setMonthName()// this sets the name of the month 
{
    if (month == 1) monthName = "January";
    if (month == 2) monthName = "February";
    if (month == 3) monthName = "March";
    if (month == 4) monthName = "April";
    if (month == 5) monthName = "May";
    if (month == 6) monthName = "June";
    if (month == 7) monthName = "July";
    if (month == 8) monthName = "August";
    if (month == 9) monthName = "September";
    if (month == 10) monthName = "October";
    if (month == 11) monthName = "November";
    if (month == 12) monthName = "December";
         return monthName;//returns the month name

};

int Date::getYear() const // returns the year value
{
    return year;
};

void Date::print1()// print function style 1
{
    if (month == 0) month = 1; //sets default parameters if exceptions are thrown
    if (day == 0) day = 1; //sets default parameters if exceptions are thrown
    cout << month << "/" << day << "/" << year << endl;
};

void Date::print2()//print function style 2
{
    setMonthName();
    cout << monthName << " " << day << ", " << year << endl;
};

void Date::print3()//print function style 3
{
    setMonthName();
    cout << day << " " << monthName << " " << year << endl; 
};

int main()
{
    Date d;
    d.setMonth();
    d.setDay();
    d.setYear();
    cout << endl;
    d.print1();
    d.print2();
    d.print3();
    
    system("pause");
    return 0;
}
