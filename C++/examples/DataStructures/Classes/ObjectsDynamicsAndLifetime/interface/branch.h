#ifndef _BRANCH_H
#define _BRANCH_H

#include <string>
#include "leaf.h"

using namespace std;

class Branch {

public:

  Branch (); // default constructor
  Branch (const Branch & existingBranchObject); // copy constructor
  Branch (const int & numberOfLeaves); // constructor that creates given number of leaves
  ~Branch ();
  Leaf * getLeaves ();
  
protected:
  
  Leaf * myArrayOfLeaves; //
  static int numberOfCreatedObjects; // for number of objects control (create/destroy)
  
  
};




#endif /* not defined _BRANCH_H */
