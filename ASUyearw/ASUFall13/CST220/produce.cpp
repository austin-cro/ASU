/////////////////////////////////////////
// Austin Crothers
// CST220
// Produce
// 9/12/13
/////////////////////////////////////////

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomProduce();//random produce function
const int BUNDLESIZE = 5, bundleCount = 3;// sets max ints

class SwapProduce// a class that gets and sets the produce values from the user
{
    public:
             void Set1(int produce1) 
             {
                 Number1 = produce1;
             }
             void Set2(int produce2)
             {
                 Number2 = produce2; 
             }
             void Set3(int produce3)
             {
                 Number3 = produce3; 
             }
                         
             int Get1()
             {
                 return Number1;             
             }
             int Get2()
             {
                 return Number2;               
             }
             int Get3()
             {
                 return Number3;                 
             }
             
      private:
              int Number1;
              int Number2;
              int Number3;
};

//the below function keeps the count of the number of boxes the user has
int BoxCount()
 {
  static int BoxNumber = 1;
  return BoxNumber++;
 };

int main()// the main function
{   
    int count = 0, swapOut = 0, swapIn = 0; //initializes count swapout and swapin variables

    string swapAnswer = "yes" , createAnotherBox = "yes", swapAgain = "yes";
    string produceOptions [BUNDLESIZE] = {"Broccoli" , "Tomato" , "Kiwi" , "Kale" , "Tomatillo"};// creates an array that contains the different types of produce
    srand (time(NULL));
    
    cout << "Your box of produce is being made, we will display what your box contains. "<< endl << "If you would like to change any of the items in the box use the number " << endl << "that corresponds with the ingredients you want to change." << endl << endl;
    
    while (createAnotherBox == "yes")
    {

     cout << "Your box of produce contains bundles of: " << endl;

     //the block below gives object 1 a produce selection
     int randProduceSelection = randomProduce();
     SwapProduce Object1;
     Object1.Set1(randProduceSelection);
     cout << "1. "<< produceOptions[randProduceSelection] << endl;
     
     //the block below gives object 2 a produce selection
     randProduceSelection = randomProduce();
     SwapProduce Object2;
     Object2.Set2(randProduceSelection);
     cout << "2. "<< produceOptions[randProduceSelection] << endl;
     
     //the block below gives object 3 a produce selection
     randProduceSelection = randomProduce();
     SwapProduce Object3;
     Object3.Set3(randProduceSelection);
     cout << "3. "<< produceOptions[randProduceSelection] << endl;
     
     swapAnswer = "yes";
     swapAgain = "yes";
     
     cout  << "We have 1. Broccoli, 2. Tomato, 3. Kiwi, 4. Kale, and 5. Tomatillo available. " << endl << "Would you like to swap any of your current items for any other available items?" << endl;
     cin >> swapAnswer;
         
    while(swapAgain == "yes") 
    {
    while((swapAnswer != "yes") && (swapAnswer != "no")) // this loop  makes it so the only accepted answers are yes and no
    {
     cout << "Not a valid answer, would you like to swap any items? (yes/no): ";
     cin >> swapAnswer;
    }
    
    if (swapAnswer == "yes")
    {

      cout << "What would you like to swap out? ";
      cin >> swapOut;
      
      while ((swapOut != 1) && (swapOut != 2) && (swapOut != 3)) //this loops makes is so the only accepted answers are 1,2 or3
      {
        cout << "Invalid answer choose produce number 1, 2 or 3: ";
        cin >> swapOut;    
      }
      
        if (swapOut == 1)
        {
         cout << "What would you like to swap in? ";
         cin >> swapIn;
         swapIn--;
         Object1.Set1(swapIn);
         cout << "1. "<< produceOptions[Object1.Get1()] << endl << "2. "<< produceOptions[Object2.Get2()] << endl << "3. "<< produceOptions[Object3.Get3()] << endl;
        }
        
        if (swapOut == 2)
        {
         cout << "What would you like to swap in? ";
         cin >> swapIn;
         swapIn--;
         Object2.Set2(swapIn);
         cout << "1. "<< produceOptions[Object1.Get1()] << endl << "2. "<< produceOptions[Object2.Get2()] << endl << "3. "<< produceOptions[Object3.Get3()] << endl;
        }
        
        if (swapOut == 3)
        {
         cout << "What would you like to swap in? ";
         cin >> swapIn;
         swapIn--;
         Object3.Set3(swapIn);
         cout << "1. "<< produceOptions[Object1.Get1()] << endl << "2. "<< produceOptions[Object2.Get2()] << endl << "3. "<< produceOptions[Object3.Get3()] << endl;
        }
        
        cout << "Would you like to swap any other items? ";
        cin >> swapAgain;
    
       while((swapAgain != "yes") && (swapAgain != "no"))
       {
        cout <<"Invalid Answer, would you like to swap any other items (yes/no)?";
        cin >> swapAgain ;
       }
    }
        
    if (swapAnswer == "no")
    {
     break;
    }

    }//end of while loop
    
       cout << "You currently have " << BoxCount() << " boxes" << endl;
       cout << "Would you like to create another box to be delivered? ";
       cin >> createAnotherBox ;
       
       while((createAnotherBox != "yes") && (createAnotherBox != "no")) //this loop makes the only accepted input yes and no
       {
        cout <<"Invalid Answer, would you like to creat another box (yes/no)?";
        cin >> createAnotherBox ;
       }
}// end of create another box while loop
    
    int finalBoxNumber = BoxCount() - 1; //the sets the final number of boxes the user created
    cout << "You are going to have " << finalBoxNumber <<" boxes of produce delivered" << endl;
    
    system("pause");
    return 0;
}

//the below function creates a random variable 0-5
int randomProduce ()
{
    int randProduceSelection = (rand()%5);
    return randProduceSelection;
}


