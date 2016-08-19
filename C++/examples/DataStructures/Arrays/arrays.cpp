#include<iostream>
#include <string>
#include<math.h>

/** 
 * Масивът е съставна променлива, която може да има повече от една стойност 
 * от даден тип, като различните стойности се достигат чрез указване на индекса 
 * на стойността в допълнение към името на масива (променливата). 
 * При дефиниция на масив синтаксиса указва типа, името на променливата и броя на елементите, които масива ще съдържа
 * 
 * int myArray [10]; // масив с име myArray от тип int който ще има 10 елемента. 
 * 
 * 
 */

using namespace std;

int main (){

  
  //arrays http://www.cplusplus.com/doc/tutorial/arrays/
  
  // array of integers 
  
  int firstArray [5]; // no problem, size
  
  int second[] = {1,2,3,4,5}; // no problem, size in initialization
  
  //  int third[]; // error , does not compile
  
  int myIntArray [100] = {16, 2, 77, 40, 12071} ; // инициализация на първите пет елемента от общо 100
  
  for (int i = 0 ; i < 5 ; i++){
    
    cout << myIntArray[i] << endl;
    
    
  }
  
  cout << "------------------------------------" << endl;
  
  // array of strings example / арей (масив) от стрингове
  
  string myStringsArray [5] ; // с размер 5 
  string myFillString = "bla";
  
  for (int i = 0 ; i < 5 ; i++){
    
    myStringsArray[i] = myFillString; // елемент i е равен на текущата стойност на myStringsArray
    myFillString += myFillString; // текущата стойност на myStringsArray се променя - виж http://www.cplusplus.com/doc/tutorial/operators/ , оператор += 
    cout << myStringsArray[i] << endl; // принтира се последната стойност на myStringsArray
    
  }
  
  cout << "------------------------------------" << endl;
  
  // multidimensional arrays (mnogomeren array, ili tensor)
  
  int jimmy [3][5]; // razmernost
  jimmy [2][0] = 5; // nomer na index-ite zapochvasht ot 0, t.e. element [2][0] e vsushtnost 3,1
  cout << jimmy [2][0] << endl;
  
  // domashna - napravete matrica ot 3ti red s array, i namerete determinatata 
  // vesi - metod na gaus za diagonalizirane na matrica 
  
  // пример за матрица 10 Х 15 елемента 
  
  int someArray [10][15];
  
  cout << " Obhod po redove: " << endl;
  
  for (int i = 0 ; i < 10 ; i++){

    //1. Purviyat for loop obhojda indeksite i

    for (int j = 0 ; j < 15 ; j++){

      // 2. Vtoriqt for loop obhojda indeksite j. Vuzmojno e razbira se purvo da se obhodqt j & togava i, vupros na predpochitanie
      
      someArray[i][j] = (i+1)*(j+1); // elementa i,j e raven na rezultata ot umnojenieto na i+1 po j+1 ((i+1)*(j+1)). slagame +1 poneje broeneto na index-ite zapochva ot 0 (standart v C++)
      cout << "element " << i+1 << "," << j+1 << " = " << someArray[i][j] << " "; // 
    }
    cout << endl;
    
  }
  
  // Да обходим someArray първо по index j и togava по index i 
  cout << " Obhod po stulbove: " << endl;
  
  for (int j = 0 ; j < 15 ; j++){

    //1. Purviyat for loop obhojda indeksite j (ot 1 do 15)

    for (int i =0 ; i < 10 ; i++){
      
      // 2. Vtoriqt for loop obhojda indeksite i (ot 1 do 10).
      
      cout << "element " << i+1 << "," << j+1 << " = " << someArray[i][j] << " ";
      
    }
    cout << endl;
  }  
  
  return 0;
  
}

// Disclamer - обход и масив са много тъпи думи, замествайки loop и array :)) голяма боза общо взето с термините на бг


// g++ arrays.cpp -o arrays.o
// ./arrays.o
