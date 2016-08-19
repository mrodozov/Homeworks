#ifndef _LEAF_H
#define _LEAF_H

#include <string>

/** листото има и форма. добавете променлива за форма, използвайки enum */

enum LeafShape { Square , Triangle , Circle , Hexagon }; // 

using namespace std;

class Leaf {

public:
  void setColor(const string & leafColor);
  const string & getColor();
  void setShape(const LeafShape & shape);
  const LeafShape & getShape();

  Leaf (); // default constructor
  Leaf (const Leaf & existingLeafObject); // copy constructor
  Leaf (const string & initialColor,const LeafShape & initShape); // constructor that sets the color and the shape
  ~Leaf ();
  static int getNumberOfIntances(){ return numberOfObjects  ;};

protected:
  
  string color; //
  LeafShape shape;
  static int numberOfObjects ;
  
  
};



#endif /* not defined _LEAF_H */
