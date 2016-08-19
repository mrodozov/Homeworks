#include <string>
#include <iostream>
#include "NormalInheritance.h"
#include "AbstractBase.h"

using namespace std;

/**
 * Покрити примери:
 * 1. Abstract base class
 * 2. Downcasting 
 * 
 */

void askObjectToCry (Base * obj){ obj->justCry(); };

int main (){
    /*
  Base * oneBase = new Base();
  Derived * oneDerived = new Derived();
  
  askObjectToCry(oneBase);
  askObjectToCry(oneDerived);
  */
    
    string lol = "blaa";
    
    ClassOne * one = new ClassOne();
    ClassTwo * two = new ClassTwo();
    ClassThree * three = new ClassThree();
    
    functionUsingAbstractBaseClass(one,lol);
    functionUsingAbstractBaseClass(two,lol);
    functionUsingAbstractBaseClass(three,lol);
    
  return 0;
}