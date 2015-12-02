/////////////////////////////////////////
// Austin Crothers
// CST220
// Ship
// 10/21/13
/////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class ship // creates the base class 
{       
protected: // allows the values to be accessed by other classes
        string sName; //initalizes a ship name string
        int year; // initalizes a ships year

public:
      string& setShipName(); // creates a function to set the ship name through user input
      string getShipName() const; // creates a return function to return the users input
      int& setShipYear(); // creates a function to set the ships year through user input
      int getShipYear() const; // creates a return function to return the users input
      void print();// creates a print function to display the values
      ship(); //creates a ship function
};

class cruiseShip : public ship //this class inherites the values of class ship
{
private:
        int passengerAmt; // initializes an int that stores the amount of passengers the ship can carry

public:
      int setPassengers(); // creates a function that asks the user to input the amount of people their ship can hold
      int getPassengers() const; // creates a return function to return the users input
      cruiseShip(); // creates a cruise ship function
      
      void print() // outputs what the cruise ship class is supposed to output
      {
       cout << "Cruiseship name: " << sName << endl << "Maximum number of passengers: " << passengerAmt << endl << endl;
      }   
};

class cargoShip : public ship  //this class inherites the values of class ship
{
private:
         int cargoAmt;// initializes an int that stores the amount of cargo the ship can carry
        
public:
       int setCargo(); // creates a function to ask the user for input
       int getCargo() const; // creates a function to return the users input
       cargoShip(); // creates a cargo ship function
       
       void print()  // outputs what the cargo ship is supposed to output
       {
        cout << "Cargoship name: " << sName << endl << "Maximum cargo load: " << cargoAmt << endl << endl;
       } 
        
};

string& ship::setShipName()// function that asks the user to input a ship name
{
    string shipName = " ";
    cout << "Enter in your ship name: ";
    getline (cin,shipName);
    sName = shipName;   //sets users input to sName
}

string ship::getShipName() const
{ 
    return sName; //returns user input to ship class
}

int& ship::setShipYear()// promts the user to enter in the year of their ship
{
    int sYear = 0;
    cout << "Enter in the year of your ship: ";
    cin >> sYear;
    cout << endl;
    year = sYear;// sets users input to year
}

int ship:: getShipYear() const
{
    return year; // returns users input to ship
}

int cargoShip::setCargo() // promts user to enter in a cargo weight
{
    int cargoNum;
    cout << "Enter in the maximum cargo load in tonnage: ";
    cin >> cargoNum;
    cout << endl;
    cargoAmt = cargoNum; // sets the users input to cargo amount
}

int cargoShip::getCargo() const
{
    return cargoAmt; // returns the users input to the cargoship class
}

int cruiseShip::setPassengers()// promts the user to input their ships number of passengers
{
     int passengerNum;
     cout << "Enter in the maximum number of passengers: " ; 
     cin >> passengerNum;
     cout << endl;
     passengerAmt = passengerNum; // sets the users input to the passenger amount variable
     
}

int cruiseShip::getPassengers() const
{
    return passengerAmt; //returns the users input to the cruise ship class
}

ship::ship()
{
   setShipName(); // calls the setShipName function
}

cruiseShip::cruiseShip()
{
   setPassengers();// calls the setPassengers function
}

cargoShip::cargoShip()
{
   setCargo();// calls the setCargo function
}

void ship::print() //Prints out the users input for the ship class
{
     ship::setShipYear();// calls the function to set the year of the ship
     cout << "Ship Name: " << sName << endl << "Year of ship: " << year << endl << endl;
} 

int main()
{
    ship s; // creates a ship object
    s.print(); // calls the print function for the oject
    
    cin.ignore(); // ignores the user input after the getline to allow for propper reading after a getline
    cruiseShip cs; // creates a cruise ship object
    cs.print(); // calls the print function for the oject
    
    cin.ignore();  // ignores the user input after the getline to allow for propper reading after a getline
    cargoShip cgos; // creates a cargo ship object
    cgos.print(); // calls the print function for the oject
    cin.ignore();  // ignores the user input after the getline to allow for propper reading after a getline

    ship so2; ////////WORKS FINE but unsure of what is being asked,something about default constructors.
    so2.print(); ////////////////////////
    
    system("pause");
    return 0;
}







