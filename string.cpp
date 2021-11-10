#include <iostream>
#include <string>
#include <queue>
#include <map>
 using namespace std;
int main()
{
  //create a map for containing individual string characters and their respective occurence in decimal.
  map<char, int> frequency_table;
	
  //string to be tested
  string s = "she sells sea shells by the sea shore";
 
  int count = 0; //this will count the occurence of each string character.
	
  for(int j=0; j<s.length(); j++){
  
    for (int i = 0; (i = s.find(s[j], i)) != std::string::npos; i++) {
        count++;
    }
    //if character is not in the map then insert it with respective frequency.
    	if ( frequency_table.find(s[j]) == frequency_table.end() ) {
  		 	// not found
  		 	frequency_table.insert(pair<char, int>(s[j], count));
		}
    //reset counter for next character
    count=0;
  }
  //frequency_table.erase(' '); -- spaces shouldn't be removed
  
	//the following prints out the frequency table
    for (auto x : frequency_table) {
		cout << x.first << " " << x.second << "\n";
    }
  
  return 0;
    
}
