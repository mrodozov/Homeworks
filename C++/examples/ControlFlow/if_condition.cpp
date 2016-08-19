#include <iostream>

using namespace std;

// if-else conditions и оператори - ако след като прочетете тоя файл не сте разбрали 
// ключовата дума  
//  if() 
//проверява дали даден израз (statement) или променлива е true или false.
// if  има скоби за условие и скоби на тялото, като в скобите за условие - "()" се проверява дали израза връща true или false
// а инструкциите в скобите на тялото - "{}" се изпълняват ако израза в скобите за условие е равен на логическо true. 
// За логическа false стойност се приемат единствено стойността на булева променлива със стойност false, примерно 
bool exampleBoolean = false;
// или числото 0, примерно 
int boolFalse = 0;
//Всички останали стойност, без оглед на типа се приемат за true, примерно
string someString = "example"; // възприема се като true в if(someString) условието
// Често срещани изрази проверявани чрез if са резултатите от действия между променливи с оператор,
// примерно сравнения на променливи, търсене на символ в променливите, резултата от търсенето на който може да е true или false.
// Тъй като резултата от сравнение на променливи с оператори може да се присвои на променлива от тип bool,
// то израза (statement) от сравнението може да се разглежда като валидна променлива от тип bool със стойност true или false, примерно
// int a=5;
// int b=7;
// if ( a > b ) { 
//   cout << ( a > b ) << endl; // this would print the evaluation of ( a > b ), but since a > b is false, the block in the {} brackets is skipped
// }
// където 
// bool compare =  a > b ; // еквивалентно на false в случая може да замени a > b
// if (compare) {
// 	cout << ( a > b ) << endl;
// }
// 
// 
// ключовата дума 
// else if () 
// се използва за проверка на следващ булев израз, в случай че израза в if() условието е false. else if оператора може да се използва
// множество пъти след if, примерно 
//
// int varone = 10;
// int vartwo = 10;
// if ( varone > vartwo ){
//   cout << " first is true" << endl;
// }
// else if ( varone < vartwo ){
//   cout << " second is true " << endl;
// }  
// else if ( varone != vartwo ){
//   cout << " third is true " << endl;
// }
// else {
//  cout <<  " none is true " << endl;
// }
// думата else се използва само със скоби за изпълнение на блок, в случай че всички изрази подадени на if и else if са били false. 
// 


int main (){
  
  int a=5;
  int b=7;
  if ( a > b ) { 
    // this would print the evaluation of ( a > b ), but since a > b is false, the block in the {} brackets is ignored
    cout << ( a > b ) << endl; 
  }
  // lets try to see the output anyway 
  cout << ( a > b ) << endl; 
  
  // да присвоим резултата от сравнение между променливи на булева променлива
  bool compare  =  a > b ;
  // използваме резултата в if условие
  
  if ( compare ) {
    cout << ( a > b ) << endl; // nope, still not true
  }
  else { // да използваме else 
    cout << "em kot takoa " << endl;
  }
  
  // приоритет на операторите - както в математиката, ако използваме няколко оператора един след друг те имат приоритет на изпълнение, и е добре да се конкретизира със скоби.
  // указания за приоритет на операторите - накрая на http://www.cplusplus.com/doc/tutorial/operators/
  
  cout << 5 * 6 + 7 << endl;
  cout << 5 * (6 + 7) << endl;
  
  // Логически оператори NOT, AND, OR (не, и, или). освен операторите за математически сравнения > , < , >= , <= , == , != 
  // другите най-често използвани оператори са логическите НЕ, И и ИЛИ (). Te се използват когато трябва да се оценят логически изрази
  // Прочетете ги под 'Logical operators ' http://www.cplusplus.com/doc/tutorial/operators/ 
  // Оператор !  ;  логическо НЕ, обръща булевата стойност на израза който стои след него от true->false или false->true пример: 
  
  if ( ! ( 5 < 3 )  ) {  // това което се случва тук е 1. ( 5 < 3 ) връща false, оператора ! го превръща от false във true и условието се превръща в  if(true)
    cout << " 5 is not < than 3  but the condition is true" << endl;
  }
  // simply 
  bool condition = false;
  if ( !condition ) {
    cout << "! makes true to false and false to true :) it's that simple " << endl;
  }
  
  // Оператор && - логическо И (означава И едното, И другото) когато имаме два булеви израза, и поставяме условие и двата да бъдат true:
 bool leftBooleanExpression ;
 bool rightBooleanExpression ;
 
 leftBooleanExpression = (3 > 1);
 rightBooleanExpression = (5 < 10);
 
 if ( leftBooleanExpression && rightBooleanExpression ) { cout << "Voila !" << endl;  }
 string stringone = "blabla";
 string stringtwo = stringone;
 leftBooleanExpression = (stringone == stringtwo) ; // освен на числа можем да сравняваме стойностите и на стрингове както се вижда; забележете разликата между = и == ; = е оператор за присвояване, == за сравнение на стойности
 if ( !leftBooleanExpression && rightBooleanExpression ) { cout << " rokela batka :) " << endl; }
 
 // Оператор || ; логическо ИЛИ , (означава ИЛИ едното, ИЛИ другото) когато имаме два булеви израза, и поставяме условие или единият, или другият да са true
 
 leftBooleanExpression = false;
 
 if ( leftBooleanExpression || rightBooleanExpression ) { cout << " left is false but right is true so - the whole expression is valid " << endl; }
 
 // Комбинация от няколко условия 
 
  if ( ! ((( 5 < 10 ) || !( 3 > 6 ))  &&  leftBooleanExpression ) )  { cout << " conditions can be combined to sofisticated expressions, but at the end is always simply \" if(boolean) \"  " << endl;}
  // горния израз показва и т.н. escape оператор \ , който позволява да напишем кавички вътре в кавичките ;) без него трудна работа 
  
 // Основното нещо да се запомни тук е, че в скобите на if() се поставя израз, който е или true или false, без значение сложността на израза в скобите.
 // Идеята е да свикнете да пишете логически условия и със синтаксиса на if() . Нагледни примери на http://www.tutorialspoint.com/cplusplus/cpp_if_else_statement.htm 
 
  
 return 0;
 
}