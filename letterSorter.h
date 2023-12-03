#ifndef letterSort
#define letterSort

#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

//returns true if guess is correct and puts leters into a txt file
vector<vector<vector<int>>> letterSort(string guess, string solution)
{
        vector<vector<int>> greenList;
        vector<vector<int>> yellowList;
        vector<vector<int>> greyList;
  
          bool greenYellowCheck = false;

            int counter = 0;
            int green = 0;
            int yellow = 0;
            int grey = 0;

            for(int i = 0; i < 5; i++)
            {

                
                greenYellowCheck = false;

                for(int n = 0; n < 5; n++)
                {

                    if(solution[i] == guess[i]) // can optimize by putting this outside the inner for loop and doing n++ if its found
                    {
                        green++;
                        greenList.push_back({guess[i], i});
                        greenYellowCheck = true;
                        break;
                    }
                    else if((solution[i] == guess[n]) && (i != n)) //the edge case i!=n can be removed I just wanted to be safe
                    {
                        yellow++;
                        yellowList.push_back({guess[n], n});
                        greenYellowCheck = true;
                        break;
                    }

                }

                if(greenYellowCheck == false)
                {
                    greyList.push_back({guess[i], i});
                    grey++;
                    
                }

            }



 ofstream foutput; 
 ifstream finput;
 finput.open ("apnd.txt");
 foutput.open ("apnd.txt",ios::app); 
 
 if(finput.is_open())
   foutput<<"\nWrite here whatever you want to store in the text file.\n"; 
  
 cout<<"\n Data has been appended to file";
 
 finput.close();
 foutput.close(); 



  return {greenList, yellowList, greyList};
}


#endif 
