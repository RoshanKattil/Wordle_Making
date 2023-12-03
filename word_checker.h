#ifndef word_checker
#define word_checker

#include <fstream>
#include <string>;
#include <iostream>;

using namespace std:

//a's are at 141
//b's are at 314
//c's are at 512
//d 623
//e 695
//f 831
//g 946
//h 1015
//i 1049
//j 1069
//k 1089
//l 1177
//m 1284
//n 1321
//o 1362
//p 1504
//q 1527
//r 1632
//s 1998
//t 2147
//u 2180
//v 2223
//w 2306
//y 2312
//z 2315

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
