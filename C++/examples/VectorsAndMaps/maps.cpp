#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <new>
#include <stdlib.h>
#include <map>
#include <vector>

using namespace std;

int main (){
  
  vector <string> vectorOfKeys;
  
  vectorOfKeys.push_back("first");
  
  vectorOfKeys.push_back("second");
  
  vectorOfKeys.push_back("third");
  
  vectorOfKeys.push_back("forth");
  
  vectorOfKeys.push_back("fifth");
  
  map<string,int> exampleMap;
  
  for (int i = 0; i < vectorOfKeys.size() ; i++ ){
    
    cout << "the element " << i << " of the vector is " << vectorOfKeys.at(i) << endl;
    
    exampleMap[vectorOfKeys.at(i)] = i + 1;
    
  }

  
  //
  cout << exampleMap.at("first") << endl;
  
  cout << exampleMap["first"] << endl;
  cout << exampleMap["fifth"] << endl;  

  for (std::map<string,int>::iterator it=exampleMap.begin(); it!=exampleMap.end(); ++it){
    
    std::cout << it->first << " => " << it->second << '\n';
    
  }
  
  
  return 0;
  
}
