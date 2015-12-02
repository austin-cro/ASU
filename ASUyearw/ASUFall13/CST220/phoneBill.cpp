///////////////////////////
//Austin Crothers
//Phone Bill
/////////////////////////
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Customer // declares a customer class
{     
      public:
      Customer(string z, int x) // declares the types of input this function will receive
      {
      }

};

class Compute_Bill // declares a compute bill class
{
      Compute_Bill()// declares a comput bill function
      {
      }
};


int main()
{
    Customer* list[6]; // declares a pointer to the customer list
    list[0] = new Customer("John Dough", 20); // these next lines of code initialize the
    list[2] = new Customer("Sean Dough", 40); //strings and ints that go in each list
    list[1] = new Customer("Bob Dough", 30);
    list[3] = new Customer("Mike Smith", 50);
    list[4] = new Customer("Ryan Johnson", 60);
    list[5] = new Customer("Jimmy Jim", 70);
    list[6] = new Customer("Timmy Tom", 80);
    
    for(int i=0; i < 6; i++) // this loop outputs the data in each of the strings
     {
       cout << "Customer" /*list[i]->getName()*/ << " owes"
            << /*list[i].Compute_Bill()*/ " dollars." << endl;
     }
     
     system("pause");
     return 0;
     
}
