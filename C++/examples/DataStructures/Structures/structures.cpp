#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Структурите са съставен тип данни, в който комбинираме съществуващи типове 
// за да дефинираме така наречените 'членове' на структурата, в резултат на което 
// получаваме тип, чиито различни 'членове' могат да присвояват различни типове данни
// Когато моделираме даден предмет или понятие, ние използваме конкретни прости типове
// които да могат да присвояват стойността на конкретна характеристика на предмета или понятието,
// ако характеристиката може да се опише с някой от типовете които имаме.
// За пример можем да дадем някои общи характеристики на плодовете:


struct fruit {
  int weight; // тегло
  double price; // цена
  string name; // име 
  string color; // цвят
};

// Съставната променлива от тип fruit (плод)  съдържа прости променливи носещи конкретните стойности, които различните плодове имат
// Синтаксиса за създаване на нова структура е: 
// struct име_на_структурата {
// тип име_на_поле_едно ;
// тип име_на_поле_две ;
// тип име_на_поле_три ;
// ......
// };
// Дефиницията на нова структура всъщност създава нов тип. Променливи от този тип се създават както от всеки друг тип - името на типа последван от конкретни променливи 
// Тъй като новият тип е 'съставен', ние имаме достъп до 'вътрешните' променливи на типа използвайки техните имена


struct my_new_struct {
  
  int member_one;
  string member_two;
  bool member_three;
  double member_four;
  // lets use non-base type
  fruit member_fruit;
  
};

void some_func_to_play_with_structs (){
  
  my_new_struct variable_one, variable_two, variable_three;
  // достъп до вътрешните променливи имаме използвайки оператора . и имената на вътрешните променливи (членовете)
  variable_one.member_one = 3;
  variable_two.member_two = "some string";
  variable_three.member_three = false;
  
}

// структурите са удобен начин да създадем съставен тип, описващ модел с множество характеристики
// начинът на работа е много интуитивен, но е важно да се използват променливите по имена, и да не се бърка с имената на типовете


int main()
{ 
  
  my_new_struct variable_1, variable_2, variable_3;
  
  // име_на_променлива.member_name
  // в този случай .member_fruit връща отново съставен тип (от тип fruit), който има свои полета, достъпни отново с оператора .
  
  variable_1.member_fruit.color = "i'm hipster magenta fruit"; // 
  variable_1.member_fruit.name = "lololo";
  variable_1.member_fruit.price = 1;
  variable_1.member_fruit.weight = 1;
  
  variable_2.member_fruit.color = "dunno color";//
  
  variable_3.member_fruit.color = "50 shades of gay";//
  
  // 
  
  fruit banana;
  fruit apple;
  fruit orange;
  
  banana.weight = 4;
  banana.name = "green banana";
  banana.color = "green";
  banana.price = 0.5;
  
  apple.weight = 5;
  apple.name = "apple";
  apple.color = "red";
  apple.price = 0.7;
  
  orange.weight = 7;
  orange.name = "orange";
  orange.color = "orange";
  orange.price = 0.1;
  
  fruit plod[3]; // array ot plodove 
  
  plod[0] = banana;
  plod[1] = apple;
  plod[2] = orange;
  
  for (int i = 0 ; i < 3 ; i++){
    cout << " teglo " << plod[i].weight << " ime " << plod[i].name << " cvqt " << plod[i].color << " cena " << plod[i].price << endl;
  }
  
  // Подробности на 
  // http://www.cprogramming.com/tutorial/lesson7.html и http://www.cplusplus.com/doc/tutorial/structures/ 
  
  
}

