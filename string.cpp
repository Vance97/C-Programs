#include <iostream>
#include <string>
#include <queue>
#include <map>
 using namespace std;
int main()
{

  map<char, int> frequency_table;
  priority_queue <int, vector<int>, greater<int> > pq;
  
  std::string s = "she sells sea shells by the sea shore";
 
  int count = 0;
  for(int j=0; j<s.length(); j++){
  
    for (int i = 0; (i = s.find(s[j], i)) != std::string::npos; i++) {
        count++;
    }
    
    	if ( frequency_table.find(s[j]) == frequency_table.end() ) {
  		 	// not found
  		 	frequency_table.insert(pair<char, int>(s[j], count));
		}
    
    count=0;
  }
  //frequency_table.erase(' '); -- spaces shouldn't be removed
  
    for (auto x : frequency_table) {
		cout << x.first << " " << x.second << "\n";
    }
  
  return 0;
    
}
