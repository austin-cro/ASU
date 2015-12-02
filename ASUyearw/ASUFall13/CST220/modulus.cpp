#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double num;
    cout << "Enter a number: ";
    cin  >> num;
    
    //cout << endl << "Your number: "<< num;
    
    int newnum = (num/100);
    
     cout << "newnum" << newnum <<"!";
    
    int modnum = newnum%10;
   
    cout << endl << "Your number %10: " << modnum << endl;
    
    system("pause");
    return 0;
}
