#ifndef BASE_RESOURCE_H
#define BASE_RESOURCE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BaseResource{
  
  vector<string> data;
  
protected:
  
  virtual void setData(const vector<string> & data_vector) { this->data = data_vector; }
  
public:
  
  virtual void getResourceForRequest(const std::string & requestDescription)= 0;
  virtual vector<string> getFormattedData () const = 0;
  bool dataFormatIsCorrect () { return this->getFormattedData().size() == 100 ; }
  
};


#endif