#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <new>
#include <stdlib.h>
#include <vector>

using namespace std;

class MySecClass {

public:

  int firstfield;
  
  };

class MyExampleClass {
  
public:
  
  int someIntegerField;
  string someStringField;
  MySecClass secclassfield;
  
};





int main (){
  
  vector<int> vector_its;
  vector<double> vector_doubles;
  vector<MyExampleClass> vectorOfUserDefinedObjects;

  for (int i = 0; i < 50 ; i++){
    
    vector_its.push_back( i*10 );
    
  }

  cout << vector_its.at(49) << endl;

  for (int i = 0 ; i < vector_its.size() ; i++ ){
    cout << vector_its.at(i) << endl;
  }

  cout << "end of vector of integers" << endl;
  
  MyExampleClass obj1, obj2, obj3;


  obj1.someIntegerField = 10;
  obj1.secclassfield.firstfield = 5;
  //obj2.someIntegerField = 21;
  //obj3.  someIntegerField = 33;
  
  
  
  vectorOfUserDefinedObjects.push_back(obj1);
  vectorOfUserDefinedObjects.push_back(obj2);
  vectorOfUserDefinedObjects.push_back(obj3);

  cout <<  vectorOfUserDefinedObjects.at(0).someIntegerField << endl;
  cout <<  vectorOfUserDefinedObjects.at(0).secclassfield.firstfield << endl;
  
  
  return 0;
}
