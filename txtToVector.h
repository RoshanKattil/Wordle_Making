#ifndef txtToVector
#define txtToVector

#include <bits/stdc++.h>
#include <string>
#inclide <iostream>
using namespace std;


vector<string> textToVec(string fileName)
{
  ifstream file(fileName);
 
    vector<string> vec;
    string word;
 
    // Read the next line from File until it reaches the
    // end.
    while (file >> word) {
        // Now keep reading next line
        // and push it in vector function until end of file
        vec.push_back(str);
    }

  return vec;
}

#endif
