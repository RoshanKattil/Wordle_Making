#ifndef dataStructClass
#define dataStructClass.h

#include "randomWord.h"
#include "letterSorter.h"
#include "word_checker.h"
#include "clearTxt.h"
#include "txtToVector.h"

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include  <bits/stdc++.h>

using namespace std;


    class wordleGame
    {
      public:
        string inputString;
        string guessedWord;
        vector<string> allowed = textToVec("allowed.txt");
        vector<string> words = textToVec("words.txt");

        int attempts;

        bool guessed = false;
        

        string get_input()
        {
            guessed = false;
            cout << "Enter your guess:" << endl; 
            getline(cin, inputString); 

            return inputString;
            
        }
        

        bool input_verification()
        {
            // if input is a verifable word guessedWord = input
              // function that verifies input
                if(wordChecker())
                {
                    guessedWord = inputString;
                    attempts++;
                    guessed = true;
                    return true;
                }
                else
                {
                    cout << "not a valid guess" << endl;
                    return false;
                }
        }

      // function that sorts letters into green, yellow, and grey
        

      


      private:
        string correctWord;

        void word_generation()
        {
            correctWord = randomWord(words);
        }

        void sortLetters()
        {
            letterSorter(guessedWord, correctWord);
        }
        

        //function to get random word

        
        
    };


#endif
