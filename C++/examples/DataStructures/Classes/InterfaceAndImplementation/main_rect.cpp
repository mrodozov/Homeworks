#include <string>
#include <iostream>
//#include "/home/rodozov/Projects/C++/WorkingCode/DataStructures/Classes/rectangle.h" // when the header is not in the same dir
#include "rectangle.h" // when the header is in the same dir 

using namespace std;


/**
 * Покрити примери:
 * 1. Основи на класовете
 * 2. Видимост на полетата и методите (private public protected)
 * 3. Конструктори и деструктори
 * 4. Overload & overwrite 
 * 5. Static members
 *
 * 
 */


int main () {
  
  Rectangle arect;
  arect.set_values(3,4);
  cout << arect.get_diagonal() << endl;
  arect.printProperties();
  // 
  
  cout << arect.getAngle() << endl;
  
  return 0;
  
}
