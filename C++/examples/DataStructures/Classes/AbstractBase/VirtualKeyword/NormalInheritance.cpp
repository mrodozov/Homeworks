#include "NormalInheritance.h"
#include <iostream>

using namespace std;

void Base::justCry(){
  std::cout << "i'm retarded object of type Base" << std::endl;
}

void Derived::justCry(){
  std::cout << "i'm retarded object of type Derived" << std::endl;
}

// constr and destr

Base::Base(){}
Base::~Base(){}
Derived::Derived(){}
Derived::~Derived(){}
