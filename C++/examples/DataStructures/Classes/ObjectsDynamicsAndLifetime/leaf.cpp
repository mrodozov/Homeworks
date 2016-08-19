#include "interface/leaf.h"
//#include "/home/vesi/Programs/Classes/ObjectLifecycle/interface/leaf.h" // -> да ви напомня, че е едно и също

void Leaf::setColor(const string & leafColor){
  this->color = leafColor;
}

const string & Leaf::getColor(){
  return this->color;
}

void Leaf::setShape(const LeafShape & lshape){
  this->shape = lshape;
}

const LeafShape & Leaf::getShape(){
  return this->shape;
}


Leaf::Leaf () // default constructor
{
  numberOfObjects++;
}

Leaf::Leaf (const Leaf & existingLeafObject) // copy constructor 
{
  
}

Leaf::Leaf (const string & initialColor,const LeafShape & initialShape){ 
  this->setColor(initialColor); 
  this->setShape(initialShape);
} // constructor that sets the color and shape



Leaf::~Leaf ()
{
  numberOfObjects --;
}

//const int & LeafShape::getNumberOfIntances(){ return LeafShape::numberOfObjects; }

int Leaf::numberOfObjects = 0;
