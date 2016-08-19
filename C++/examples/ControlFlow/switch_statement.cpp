#include <iostream>

using namespace std;

// switch израза се използва за проверка дали даден израз (в най-общия случай променлива) съвпада със стойност от изброените в switch листа. 
// за този пример е необходимо да се компилира и да се разбере примера в examples/SimpleExamples/break-nechetni.cpp и да се разбира смисъла на break; 

int main (){
  
  // най-общо имаме някакъв израз, който се сравнява с лист от изброени стойности, точно както в if() else if() else if () ... 
  // switch statement-a e по-нагледен от if , else if, else if ... и се използва, когато имаме ограничен брой възможности, които следва да се опишат в лист.
  
  int x = 15;
  
  switch (x) {
    case 1:
    {
      // направи нещо в случай, че х == 1
      cout << " do some stupid stuff " << endl;
      break; // ако случая е този, използвай brake; за да не се проверяват 
    }
    case 3:
    {
      cout << "do something for three"  << endl;
      break;
    }
    case 7:
    {
      cout << " do some even more retarded " << endl;
      break;
    }
    case 15:
    {
      cout << " do real shit (jk do nothing) " << endl;
      break;
    }
    default:
    {
      cout << " not even in the list " << endl;
      // ако стойността не съвпада с никоя
    }
  }
  
  // често switch се използва заедно с enum, където енумераторите са специален тип, използващи удобни имена, които заместват числени стойности 
  
  enum MyColors {
    Red = 1, Green, Yellow, Blue, Orange, Purple, Violet
  };
  // от enum може да се декларират 'променливи', използвайки 'типа' (името) на enum-a :
  
  MyColors colorOne, colorTwo, colorThree;
  // и всяка 'променлива' може да взема 'стойност', дефинирана в enum-a. 
  colorOne = Green;
  colorTwo = Purple;
  colorThree = Orange;
  // по такъв начин удобно се дефинират листове, които после се използват в switch блокове:
  
  
  for (int i = 0 ; i < 3 ; i++){
  
    MyColors aColor;
    switch (i){
      
      case 0:{ aColor = colorOne; break; }
      case 1:{ aColor = colorTwo; break; }
      case 2:{ aColor = colorThree; break;}
    }
  
    switch ( aColor ){
      case Red:
      {
	cout << "its red " << endl;
	break; // ако случая е този, използвай brake; за да не се проверяват всички останали случаи
      }
      case Green:
      {
	cout << "its green " << endl;
	break;
      }
      case Yellow:
      {
	cout << "its yellow " << endl;
	break;
      }
      case Blue:
      {
	cout << "its blue " << endl;
	break;
      }
      case Orange:
      {
	cout << "its orange " << endl;
	break;
      }
      case Purple:
      {
	cout << "its purple " << endl;
	break;
      }
      case Violet:
      {
	cout << "it's violet " << endl;
	break;
      }
      default:
      {
	cout << "no such color " << endl;
	
	// ако стойността не съвпада с никоя от изброените
      }
    }
  
  }
  
  
  
  return 0;
}