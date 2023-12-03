#ifndef word_checker
#define word_checker

#include <fstream>
#include <string>;
#include <iostream>;

using namespace std:

//a's are at 596
//b's are at 1332
//c's are at 2056
//d 2630
//e 2861
//f 3323
//g 3846
//h 4266
//i 4397
//j 4597
//k 4935
//l 5424
//m 6010
//n 6298
//o 6591
//p 7236
//q 7291
//r 7814
//s 9013
//t 9679
//u 9835
//v 10034
//w 10364
//x 10380
//y 10555
//z 10657

bool wordChecker(string word, &vector<string> allowed)
{

  //set to word change to allowed
  const int index[26] = {0, 596, 1332, 2056, 2630, 2861, 3323, 3846, 4266, 4397, 4597, 4935, 5424, 6010, 6298, 6591, 7236, 7291, 7814, 9013, 9679, 9835, 10034, 10364, 10380, 10555, 10657};

  //converting the first char to ascii then subtract by 97 to get it mapped from 1-27
  int asciiValue_0 = int(word[0])-97;
  int asciiValue_1 = int(word[1])-97;

  if(word[0] == x) // checks if first charachter is not x
  {
    return false;
  )
  else if((asciiValue_0 <= 26) && (asciiValue_0 >= 0)) //checks if first charachter is a letter
  {
      // decides to start looking at start or end of subset of vector
      if(asciiValue_1 < 9)
      {

      for(int i = index[asciiValue_0]; i < indlex[asciiValue_1 +1 ]; i++)
      {if(word == allowed[i])
        {return true;}
      }
      else // checks in reverse if its closer to end
      {
        for(int i = index[asciiValue_0 + 1]; i < index[asciiValue_0]; i--)
          {if(word == allowed[i])
            {return true;}}
      }

    }
    
  }
  else
  {
    return false;
  }
  
  
  

}



#endif
