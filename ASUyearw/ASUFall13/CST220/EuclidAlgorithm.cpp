#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int userIn,userIn2,x, y, r, r2, GCD = 1, LCM;
    char play = 'y';
    
    cout << "This program finds the Greatest Common Divisor of two numbers" << endl << endl;


 while(play == 'y')
 {
    cout << "Enter in first number: ";
    cin >> x;
    userIn = x;
    
    cout << "Enter in a smaller number: ";
    cin >> y;
    userIn2 = y;

    while(GCD != 0)
    {    
     r = (x%y);
     if (r == 0)
      {
       GCD = y;    
       break;
      }
       
     r2 = (y%r);
     if (r2 == 0)
      {
       GCD = r;
       break;
      }
     
     x = (r%r2);
     if (x == 0) 
      {
       GCD = r2;
       break;
      }
     
     y = r2;
     
    }

    LCM = ((userIn*userIn2)/GCD);

    cout << endl << "The Greatest Common Divisor of " << userIn 
                 << " and " << userIn2 << " is: " <<GCD << endl
                 << "The least common multiple is: " << LCM << endl << endl;
    
    cout << "Would you like to enter in another pair of numbers?(y/n)  ";
    cin >> play;
    cout << endl;
 } 
    system("pause");
    return 0;
}
