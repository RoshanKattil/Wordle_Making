#ifndef clearTxt
#define clearTxt

bool clearFile(string fileName)
{

  bool isCleared = false;

  //takes in file name and clears the file
  ofstream ofs;
  ofs.open(fileName, ofstream::out | ofstream::trunc);
  ofs.close();

  //check if succsesful if yes then return true
  ifstream is;
  is.open (fileName.c_str(), ios::binary);
  is.seekg (0, ios::end);
  length = is.tellg();

  // check if number of charachters in file is 0 then 
  if (length == 0)
  {
    isCleared = true;
  }

  return isCleared;
  
}



#endif 
