#include "AbstractBase.h"
#include <iostream>

using namespace std;



void ClassOne::processInputResource(const string& resource){
  
  vector<string> v;
  v.push_back(resource);
  this->setData(v);
  
}

void ClassThree::processInputResource(const string& resource){
  
  vector<string> v;
  v.push_back(resource);
  v.push_back(resource);
  v.push_back(resource);
  this->setData(v);
}

void ClassTwo::processInputResource(const string& resource){
  
  vector<string> v;
  v.push_back(resource);
  v.push_back(resource);
  this->setData(v);
}



void functionUsingAbstractBaseClass(AbstractBaseClass * ptr, const string & resource){
  
  ptr->processInputResource(resource);
  
  for ( auto & i : ptr->getData()){ 
    
    cout << i << " "; 
    
  }
  
  cout << endl;
}



ClassOne::ClassOne()
{

}

ClassOne::~ClassOne()
{

}

ClassTwo::ClassTwo()
{

}

ClassTwo::~ClassTwo()
{

}

ClassThree::ClassThree()
{

}

ClassThree::~ClassThree()
{

}


AbstractBaseClass::AbstractBaseClass(){}
AbstractBaseClass::~AbstractBaseClass(){}
