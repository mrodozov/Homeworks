#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>


/** Функциите са блокове от код дефиниращи определена фунционалност която може да бъде използвана само чрез името на фунцията.
* Синтаксиса на фунциите е следният:
* 1. започва с 'връщан тип'. връщаният тип може да е всеки основен или дефиниран от нас тип, без ограничение, или може да е void (не се връща стойност)
* 2. име на фунцията - дефинира името с което фунцията се използва впоследствие
* 3. параметри (аргументи) които фунцията взема
* 4. конкретната функционалност, която всъщност е основната задача на функцията
* връщан_тип       име_на_фята      (       тип параметър_име, тип параметър_две_име ...)      {                                 функционалност                              }
*  double           func_name       (int arg_first, double arg_second, string arg third)       { // do something here and return  return 0.1; // return the expected type }
* 
*  резултата от изпълнението на ф-я може да се присвои на променлива от типа, който ф-ята връща (ако връща стойност) тоест резултата от изпълнението на ф-я която връща стойност винаги е 'нещо'
*  В частност, фунциите могат да 
*
*  1. Не връщат стойност - използва се типът void като 'връщан тип'. ако фунцията е от този тип, не се изисква return statement. пример    
*  void i_just_print (string parameter_one) { cout << parameter_one << endl; // and no need to return anything }
* 
*  2. Не вземат параметри (да имат нула на брой параметъра). Тогава скобите за параметри се оставят празни, пример   
*  int some_fixed_value_return () { return 1+2; }
*  
*  3. Вземат стойности по подразбиране на някои параметри, които ако бъдат оставени празни при извикването на ф-ята използват стойността си 'по одразбиране'
*  int functionWithDefaultValueForParameter ( int param_one , int param_two = 5 ) { return param_one + param_two ; }
*  В този случай, ако при извикването на ф-ята не дам стойност на параметъра param_two той ще вземе стойността си по подразниране 5
*  
*/


using namespace std;

// следната фунция 

// 1. връща тип int (началото преди името) . това означава, че се очаква функцията да съдържа return последван от някакъв израз (променлива или друго) с тип int и някаква стойност
// 2. sum_values е името на функцията, когато ф-ята се използва тя се извиква по името
// 3. взема два параметър - (int a, int b = 2). израза int b=2 означава, че вторият аргумент на фунцията може да бъде пропуснат и стойността по подразбиране ще е 2

int // връщан тип
sum_values // име на ф-ята
(int a, int b ) // вземани параметри (аргументи)
{
  int r; // дефинираме нова променлива
  r=a+b; // присвояваме и някаква стойност
  return r; // фунцията връща стойността на променливата r
}

// ф-я връщаща булев тип 

bool eval_statement ( double parameter_one, double parameter_two ) {  return (parameter_one > parameter_two) ;  } 
// тук след return директно слагаме израза, който първо  се оценява (true/false) и после се връща. 
// освен това тук не създаваме допълнителни променливи, на които да присвоим връщаната стойност, която да върнем с return (спестяваме си два реда в сравнение с предната ф-я)

// ф-я която не връща стойност, но взема променливи, и прави нещо повече от присвояване и връщане (всъщност просто няколко реда нищоправене и принтиране)
void i_dont_return_any_value ( string string_to_print, int int_to_print, bool some_bool_param ){
  
  if (some_bool_param || int_to_print) { cout << "just some print" << endl; }
  for (int i = 0 ; i < int_to_print ; i++){
    if (!some_bool_param) continue;
    cout << "print because the int param is > 0, namely " << int_to_print << " " << i << " more times" << endl;
  }
  
}

// ф-я единият от чиито параметри има стойност по подразбиране
int functionWithDefaultValueForParameter ( int param_one , int param_two = 5 ) { return param_one + param_two ; }

// ф-я която се изпълнява докато не изпълним конкретно условие, което я кара да стигне до края си (да спре)
void functionThatStopOnCondition (int matchCriteria) {

  int valueToMatch = matchCriteria+1;
  
  while (valueToMatch != matchCriteria){
    
    cout << " To stop this function please enter " << matchCriteria << " :" << endl;
    cin >> valueToMatch;
    cout << "You've entered: " << valueToMatch << ", trying to match" << endl;
    
  }
  
  cout << "matched and bye bye" << endl;
  
}

// прототип на ф-я която е дефинирана по-късно -
// ф-иите могат да бъдат дефинирани само като прототип, който показва само какъв тип връща ф-ята и какви типове аргументи взема, без дори да е нужно да се конкретизират имена на аргументите:

int funcThatReturnIntAndTakeDoubles(double, double, double);

// дефинирана по този начин, функцията еднозначно определя така наречената 'сигнатура' - комбинацията от връщан тип, име,  и тип и брой на вземаните параметри, което гарантира, 
// че ако фунцкията бъде използвана по име, ще бъде извикана именно тази функция, а дефиницията и (имплементацията) може да бъде конкретизирана в последствие (дори в друг файл)
// ако имплементацията е дефинирана някъде (където и да е), използването на функцията е съвсем валидно (можем да я сложим в main и да я дефинираме след това).
// това е първообраза на разделянето на 'интерфейса' от 'имплементацията'

int main ()
{
  
  //използвайте имената на функциите, задавайте им различни параметри за да ги пробвате.
  // функцията се използва само с името и параметрите си. ако връща стойност стойността може да бъде присвоявана на променливи, тоест променлива да е равна на резултата от изпълнение на ф-я
  
  int result = functionWithDefaultValueForParameter(5); // using the default value of the second param
  cout << result << endl;
  result = functionWithDefaultValueForParameter(10, 15); // passing 15 as second param
  cout << result << endl;
  
  functionThatStopOnCondition(46);
  
  cout << funcThatReturnIntAndTakeDoubles(0.2,0.3,2.2);
  
  return 0;
  
}

int funcThatReturnIntAndTakeDoubles(double par1, double par2, double par3)
{
  return par1 + par2 + par3 ;
}



// Compile:
// g++ functions_basics.cpp -o functions_basics.o
// Run: 
// ./functions_basics.o 
