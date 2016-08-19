#include <iostream>

using namespace std;

// когато подаваме параметри на функция, досега ние го правехме по начин по който подаденият аргумент се взема 'по стойност',
// или се взема копие на стойността, ако сме подали предварително дефинирана променлива. пример :

int makeSum (int first, int second){ 
  
  first = first*2;
  second = second*2;  
  return first+second; }

// в горния случай, ако при използването на функцията подадем променливи, дефинирани преди използването на функцията, подадените променливи остават непроменени
// тъй като функцията взема 'копия' на техните стойности 

// понякога ние искаме да подадем променлива на функцията, и искаме да променим нещо по самата променлива която подаваме, което е невъзможно ако се взема само нейното копие.
// затова е възможно 'подаване по референция', като манипулациите върху променлива от страна на ф-ята върху променлива, подадена по референция се отразяват директно на нея

void getByReference(int & referenceIntVariable){
  
  referenceIntVariable = referenceIntVariable/2;
  
}

// знака амперсанд който се добавя упоменава именно, че за параметъра се взема 'референция към подадената променлива',
// а манипулации върху референция към променлива се отразяват на стойността и на самата променлива:

int main()
{
  
  int parone = 10, partwo = 20;
  int result = makeSum(parone, partwo);
  // makeSum копира стойностите на parone и partwo:
  cout << parone << " " << partwo << endl;
  //
  int parThree = 10;
  cout << parThree << endl;
  getByReference(parThree);
  cout << parThree << endl;
  
  // принцип на действие на референция към променлива:
  
  int int_variable = 50;
  int & ref_to_int = int_variable;
  cout << int_variable << endl;
  ref_to_int += 50 ; // това променя стойността на променливата, към която ref_to_int сочи , за повече вижте Adress-of operator (&) на http://www.cplusplus.com/doc/tutorial/pointers/
  cout << int_variable << endl;
  
  return 0;

}