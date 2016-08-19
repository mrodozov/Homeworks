#include <iostream>
#include <string>
#include <math.h>
#include "/home/rodozov/Projects/C++/WorkingCode/examples/DataStructures/Classes/InterfaceAndImplementation/rectangle.h" // when the header is not in the same dir
//#include "rectangle.h" // when the header is in the same dir

using namespace std;

void Rectangle::set_values (double x, double y) {
  width = x;
  height = y;
}

double Rectangle::area (){
  return width*height;
}


double Rectangle::get_diagonal(){
  return sqrt(pow(width,2)+pow(height,2));
}

void Rectangle::someProtectedMethod(){
  
  cout << "Im protected function !" << endl;
  
}

void Rectangle::printProperties()
{
  cout << " print properties: " << endl;
  cout << " width: " << this->width << " height: " << this->height << endl;
  this->someProtectedMethod();
}

double Rectangle::getPerimeter(){
  return *(this->perimeter);
}

int Rectangle::angle = 90;

int Rectangle::getAngle(){
  return Rectangle::angle;
}

//

//Rectangle::Rectangle () {} // празен конструктор

Rectangle::Rectangle (){ 
  this->width =0 ;
  this->height = 0 ;
  this->perimeter = new double;
  *perimeter = 2*(this->width+this->height);
} // пример за override constructor, overwrites the default 

Rectangle::Rectangle(double width, double height){
  this->set_values(width, height);
  
}

Rectangle::~Rectangle() { 
  delete this->perimeter;
  cout << "object destroyed" << endl;
  
} // празен деструктор
