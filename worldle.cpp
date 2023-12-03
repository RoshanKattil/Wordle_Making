// have wordle.cpp run by menu.cpp file

// incide header file
// includes class


// inculde imports


#include<iostream>

using namespace std;

int main () 
{

    // initalize the headler file with the class for wordle

    string break_case;
    bool valid_input;

    wordleGame game;
    game.word_generation();


    while(!(game.gave_over()) && !(break_case == "x"))
    {
        do
        {
            break_case = game.get_input();
        
            if(break_case == "x")
            {break;}
    
            valid_input = game.input_verification()
        }
        while(!valid_input);
    }
    

    // initalize keyboard
       // ask the user to input words onto the keyboard file
       // then check is valid then put that  into a shared file which is accsesed

  
 
  

  
  
  
    return 0;
}
