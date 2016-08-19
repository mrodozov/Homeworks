#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
  
  
  // pointers (ukazateli)

  // ima dve prichini da gi polzvame 
  // 1. mogat da sochat kym promenlivi
  // 2. mogat da se izpolvat za dinamichno zadelqne na pamet
  
  //1.1 Pointer kum normalna promenliva
  
  int * foo;
  int myvar; 
  myvar = 25;
  foo = & myvar;
  
  cout << myvar << " " << *foo << " " << foo << endl;

  // mojem da smenim stoynostta na promenlivata, kym koqto sochi pointera 
  
  *foo = 57 ;
  cout << myvar << endl;
  
  //1.2 pointer to pointer example
  
  int * firstpointer;
  int * secondpointer;
  
  firstpointer = new int; // zadelqme dinamichno pamet, a firstpointer sochi kum tazi dynamichno zadelena pamet tuy kato sme mu kazali "= new int". Toest, 

  secondpointer = firstpointer;   // secondpointer sochi kym firstpointer
  *secondpointer = 50; // smenqme stoynostta (value) na dinamichnata pamet kum koqto sochi secondpointer na 50. izpolzvayki samo imeto "secondpointer" bihme vzeli samo adresa kum koyto sochi "scondpointer".
  //zatova se izpolzva *secondpointer, * ukazva "stoynostta kym koqto sochi pointer-a e 50" tuy kato secondpointer=firstpointer , to dvata ukazatelq sochat kum edno i sushto mqsto, chiqto stoynsot e smenena ot *secondpointer=50
  //Poradi tova, firstpointer bi trqbvalo da pokaje stoynost 50 ako printirame:

  cout << *firstpointer << endl; // 
  
  // obiknovenna promenliva da vzeme stoynostta na pointyra
  
  int lalala = *secondpointer;
  delete secondpointer;
  cout << lalala << endl;

  // domashna - http://www.cplusplus.com/doc/tutorial/pointers/ , vtorata programa
  
  // primer za deklaraciq na edin red, v koqto mojem da oburkame tipovete

  int * p1, * p2; // ok, dva pointera(ukazatelq)
  int * p3, p4; // wrong, pointer(ukazatel) i promenliva
  
  // 
  
  int mysize = 5;
  
  string * mystringPointer = new string [mysize];
  delete mystringPointer[];
  

  return 0;
}

