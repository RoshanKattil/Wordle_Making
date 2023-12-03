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
  const int index[25] = {141, 314, 512, 623, 695, 831, 946, 1015, 1049, 1069, 1089, 1177, 1284, 1321, 1362, 1504, 1527, 1632, 1998, 2147, 2180, 2223, 2306, 2312, 2315};

  //converting the first char to ascii then subtract by 97 to get it mapped from 1-27
  int asciiValue_0 = int(word[0])-97;
  int asciiValue_1 = int(word[1])-97;

  if(word[0] == x) // checks if first charachter is not x
  {
    return false;
  )
  else if((asciiValue_0 <= 25) && (asciiValue_0 >= 0)) //checks if first charachter is a letter
  {
      // decides to start looking at start or end of subset of vector
      if(asciiValue_1 < 9)
      {

      for(int i = (asciiValue_0 - 1); i < asciiValue_1; i++)
      {if(word == allowed[i])
        {return true;}
      }
      else
      {
        for(int i = (asciiValue_0 - 1); i < asciiValue_1; i++)
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
