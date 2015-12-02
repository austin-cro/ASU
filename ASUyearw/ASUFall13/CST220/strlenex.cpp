#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main ()
{
  char szInput[256];
  cout << ("Enter a sentence: ");
  gets(szInput);
  printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
  
  system("pause");
  return 0;
}
