#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


class myClass{
public:
    myClass( string name, int age );
    void setmyName( string name );
    string getmyName() const;
    void setAge( int age );
    int getAge() const;
private:
    string myName;
    int age;
}

int main (){
    myClass me;

    return 0;
}

myClass::myClass( string name, int age ): myName(name), age(age) {}
// it is always better to use initialization list in your cTor. also,
// by saying "age(age)" the compiler won't have problem understanding
// that the first one is the data member & the second one is the parameter
// passed (from right the left). Also when using initialization list, remember 
// to list them in the same order that they are defined.

void myClass::setmyName( string name ){
    myName = name;
}
// here we have a mutator method that sets the name of myClass.

string myClass::getmyName() const { return myName; }
// here we have an accessor method that returns type string for the 
// name of myClass.

void myClass::setAge( int age ){
    this->age = age;
}
// same as the first mutator method, but this time we need to point out 
// the difference between the two age datas. "this->age" is the data 
// member of my class. "age" is the parameter passed.

int myClass::getAge() const { return age; }
