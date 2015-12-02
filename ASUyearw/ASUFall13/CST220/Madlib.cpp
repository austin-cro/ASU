/////////////////////////////////////////
// Austin Crothers
// CST220
// Madlib
// 9/12/13
/////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{      
    std::string InstructorName = " ",YourName = " ", Food = " ", Adjective = " ", Color = " ", Animal = " ";  //initalized each string needed 
    double x = 0; // initialized the variable needed
    
    std::cout << "Enter the first or last name of your instructor: ";// prompts user for input
    std::cin >> InstructorName;//recieves users input
    
    std::cout << "Enter your name: ";// prompts user for input
    std::cin >> YourName;//recieves users input
    
    std::cout << "Enter a food: ";// prompts user for input
    std::cin >> Food;//recieves users input
    
    while (x <= 99 || x >= 121)
    {
    std::cout << "Enter a number between 100 and 120: ";// prompts user for input
    std::cin >> x;//recieves users input
    if ( x < 100 || x > 120) //makes it so the only accepted numbers are between 100 and 120
       {
        x = 99; //defaults x to 99 if the number is not between 100 and 120 to have the user input a new number
       }
    }
    
    std::cout << "Enter an adjective: ";// prompts user for input
    std::cin >> Adjective;//recieves users input
    
    std::cout << "Enter a color: ";// prompts user for input
    std::cin >> Color;//recieves users input
    
    std::cout << "Enter an animal: ";// prompts user for input
    std::cin >> Animal;//recieves users input
    
    std::cout << "\n";
    std::cout << "Dear Professor " << InstructorName << "," << "\n"; // this line and every line below displays the required text
    std::cout <<"\n";
    std::cout <<"I am sorry that I am unable to turn in my homework at this time." <<"\n";
    std::cout <<"First, I ate a rotten " << Food << ", which made me turn " << Color << " and" <<"\n";
    std::cout <<"extremely ill. I came down with a fever of " << x << "." <<"\n";
    std::cout <<"Next, my " <<Adjective << " pet " << Animal << " must have smelled the remains"<<"\n";
    std::cout <<"of the "<< Food <<" on my homework, because he ate it. I am currently"<<"\n";
    std::cout <<"rewriting my homework and hope you will accept it late. "<< "\n";
    std::cout <<"\n";
    std::cout <<"Sincerely," <<"\n";
    std::cout << YourName << "\n";
    
    system("pause");
    return 0;
}
