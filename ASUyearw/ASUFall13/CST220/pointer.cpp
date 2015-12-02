#include<iostream>
using namespace std;

int main()
{
    int *x, z = 5;
    
    cout << "address: " << *x << endl;
    
    x = &z;
    cout << "x:" << *x << endl;
    
    int y = 10;
    x = &y;
    //y = *x;
    cout << "y:" << *x << endl;
    
    int p = 18;
    x = &p;
    //p = *x;
    cout << "z:" << *x << endl;
    
    system("pause");
    return 0;
}
