#ifndef randomWord
#define randomWord

#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

string randomWord(&vector<string> words)
{

  int randomIndex = rand() % words.size();

  string word = words[randomIndex];
  
  return word
}


#endif 
