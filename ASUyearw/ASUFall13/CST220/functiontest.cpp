#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//std::string P(string PersonNames);
int height(int& heighth);
int weight(int& weightw);

int main ()
{
   int heighth = 60, weightw = 100;
 //  std::string PersonNames = "hi";
 //  std::string P(PersonNames);
   height(heighth);
   weight(weightw);
   
   system("pause");
    return 0;
}

//string P(string& PersonNames)
////{
//       PersonNames  = "Mike";
//       cout << PersonNames << endl;
//       return PersonNames;
//}

int height(int& heighth)
{
    heighth = 67;
    cout << heighth << endl;
}

int weight(int& weightw)
{
    weightw = 101;
    cout << weightw << endl;
}
