#include <iostream>
#include <string>
#include <math.h>

using namespace std;

// prototype ili interface na class-a.
// Principno tazi chast e koqto se slaga v .h file s imeto na class-a (primerno Rectangle.h) i se "#include"-va v drugiqt file - "Rectangle.cpp"
// 

class Rectangle {
  
  // poleta (members) , ili atributi 
  int width; // shirina na pravoygylnika
  int height; // visochina na pravoygylnika
  
public:

  Rectangle (); // default constructor , konstruirashta funciq na class-a bez argumenti (po podrazbirane).
  //Dori kogato ne e definiran, constructora po podrazbirane sushtestvuva kato funciq i se izpylnqva pri syzdavane na obekt(promenliva) ot tozi klass
  Rectangle (int a, int b); // constructor, konstruirashta funkciq na class-a (metod) .
  ~Rectangle();

  // metodi (ili funkcii na clasa)
  void set_values (int,int); //method-funkciq za zadavane na shirina i visochina , prototip
  int area(); // //method-funkciq za izchislqvane na liceto , prototip
  double get_diagonal();
  
};


// implementaciq na class-a. Tazi chast (ottuk do "int main()") obiknovenno se zapisva v "Rectangle.cpp" file, koyto se kompilira.
// Interface-a na class-a se zarejda v nachaloto na file-a s
// #include "Rectangle.h" // (primerno). sluchaya ne se nalaga, interface-a veche e zapisan vyv file-a
// vseki method na class-a (funciq na class-a) definiran v interface-a na class-a (.h file-a) se opisva kato funcionalnost tuk, kato se spazva syntax:
// returnType ClassName::MethodName (type parameter1, type parameter2, ... ) {     };
// koyto ne vaji samo za constructor & desctructor methodite. Poveche na http://www.cplusplus.com/doc/tutorial/classes/http://www.cplusplus.com/doc/tutorial/classes/


void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int Rectangle::area (){
  return width*height;
}

Rectangle::Rectangle (int a, int b) {
  set_values(a,b);
}

Rectangle::Rectangle () {}

Rectangle::~Rectangle () {}

double Rectangle::get_diagonal(){
  return sqrt( pow(width, 2) + pow(height, 2) ); // koren ot sumata na kvadratite na stranite (siagonala na pravoygylnika)
}


int main()
{ 
  
  Rectangle pravoygylnik1(5,6); // nov obekt s ime pravoygylnik1, pri syzdavaeto na koyto izpolzvame konstruktora zadavasht nachalni stoynosti (width, height)
  Rectangle prav2; // drug nov obekt s ime prav2, na koyto stranite ne sa set-nati, i trqbva da bydat (inache izchisloenieto na ploshtt-a shte e nepredvidimo, v nay-dobriqt sluchay 0 (undefined behaviour by default))
  prav2.set_values(3,4); // obekta prav2 izpolva funciqta set_value s parametri 3 i 4
  
  cout << pravoygylnik1.area() << endl;
  cout << prav2.area() << endl;
  cout << pravoygylnik1.get_diagonal() << endl;
  cout << prav2.get_diagonal() << endl;

  return 0;
  
}

// Za da kompilirash
// g++ rectangle_class.cpp -o rectangle.o
// Za da izpylnish
// ./rectangle.o
