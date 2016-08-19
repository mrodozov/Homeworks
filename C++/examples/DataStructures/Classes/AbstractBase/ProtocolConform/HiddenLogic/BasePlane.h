#ifndef BASE_PLANE_H
#define BASE_PLANE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BasePlaneInstructionsProtocol { // that's one interface
protected:
  
  BasePlaneInstructionsProtocol * delegate_;
  vector<string> flightPlan_;
  
public:
  
  virtual string getNextInstruction() = 0;
  virtual void startInstruction(const string & order) = 0;
  virtual void abortInstruction() = 0;
  virtual void setFlightPlan(vector<string> flightPlan) = 0; // to delegate
  virtual void followFlightPlan(vector<string> flightPlan) = 0; // to delegate
  
};

#endif