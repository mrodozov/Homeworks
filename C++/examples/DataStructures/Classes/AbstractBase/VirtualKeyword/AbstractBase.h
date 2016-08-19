/**
 * First - an interface. Design a routine that accept parameters of type AbstractBase and calls it's methods in this routine. Only objects that impl. the abstract class may be passed - Dependency injection
 * Second - covariance and contravariance types - extending nested fields of user type
 * Three - protocol conform and hidden functionality (the same as the first, but usually with single class to inherit from AbstractBase) - Apple and Twisted
 * Four - the interface as forceful way to provide functionality
 * Five - Generic programming
 * Pure and non pure AbstractBaseClass
 */
#include <string>
#include <vector>

using namespace std;

class AbstractBaseClass{
  
private:
  
  vector<string> processedData;
  
public:
  
  void setData(vector<string> & data) { this->processedData = data;}
  vector<string> getData() const { return this->processedData;}
  // pure virtual methods
  virtual void processInputResource(const string & resource)=0; // pure virtual method (function)
  
  // constructor
  AbstractBaseClass();
  // virtual destructor 
  ~AbstractBaseClass();
  
};

/**
 * Inheriting the Abstract class
 * 
 */

class ClassOne : public AbstractBaseClass {
  
public:
  virtual void processInputResource  (const string & resource);
    ClassOne();
    ~ClassOne();
};

class ClassTwo : public AbstractBaseClass {
  
public:
  virtual void processInputResource  (const string & resource);
    ClassTwo();
    ~ClassTwo();
};


class ClassThree : public AbstractBaseClass {
  
public:
  virtual void processInputResource  (const string & resource);
    ClassThree();
    ~ClassThree();
};


// As interface , enforcing the developer to provide functionality in a well defined manner


void functionUsingAbstractBaseClass(AbstractBaseClass * ptr, const string & resource); // usage function




