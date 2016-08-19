#include <iostream>

using namespace std;

// while() loop-a е цикъл много подобен на for, с разликата че е по-прост. while се изпълнява дотогава, докато условието в скобите за условие е true. Пирмер:
// while (condition) { cout << "execute this block until the logical condition is true" << endl; }
// докато променливата (или израза) в скобите на while() е true, цикъла върти (като пералня)

int main (){
  
  
  int someCounterVariable = 0;
  bool repeat = true;
  
  while (repeat) {
    
    cout << " the condition is true, counter is " << someCounterVariable << endl;
    if (someCounterVariable < 10) { 
      someCounterVariable ++;
    }
    else {
      repeat = false;
    }
  }
  
  // или съкратен пример, с който скобите на while() се използват като if (те всъщност са точно if, донякъде)
  // да не забравим да нулираме someCounterVariable и repeat :)
  
  cout << "next example: " << endl;
  
  someCounterVariable = 0;
  repeat = true;
  
  while (repeat && (someCounterVariable < 10 ) ) {
    
    cout << " this example is still stupid, as this program, and very basic, expect torture soon 3:) counter is " << someCounterVariable << endl;
    
    someCounterVariable++;
    
  }
  
  return 0;
}