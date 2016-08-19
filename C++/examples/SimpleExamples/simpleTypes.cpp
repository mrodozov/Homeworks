
#include <iostream> // include input output stream header file (in /usr/include/c++/version/iostream), so we can use basic print 
#include <string>

// namespace std // -> the name std comes from standard, meaning standard library, like string for example. for more on the namespaces see http://www.cplusplus.com/doc/tutorial/namespaces/

using namespace std;


int main (){

  // basic types
  
  int var_one; // new int variable without initialization
  int var_two = 10; // new int variable with initialization
  
  cout << "integers (int) " << endl << var_one << " " << var_two << endl; // print the values of the variables, probably var_one has no proper value
  
  var_one = 15; // change the variable value to 15
  
  cout << var_one << " " << var_two << endl; // print the values of the variables
  
  // change values again
  var_one = 5;
  var_two = 7;
  
  cout << var_one << " " << var_two << endl; // print the values of the variables
  
  // here 'int' is the variable type, var_one and var_two are the variables themself, we operate with the variables
  
  int var_three = var_one + var_two ; // operator + for sum 'int' variables values
  
  cout << var_three << " " << var_three + var_two << " " << var_three - var_one << endl;
  
  // basic operators
  
  double d_var1 ; // variable of type double
  double d_var2 = 0.2;
  float f_var1 = 0.1 ; // the difference between float and double is the precision 
  d_var1 = 0.91;
  
  cout << "doubles and floats (double, float) " << endl << d_var1 + d_var2 - f_var1 << " " << f_var1 + d_var1 + d_var2 << " " << d_var1 - f_var1 - d_var2 << endl; // plus and minus operators 
  cout << d_var1 * f_var1 << " " << f_var1 / d_var1 << endl; // division and multiplication operators
  
  // boolean type - it has two possible values True or False. If the value is different from 0 is taken from True, values is not explicitely false only when it's 0
  
  bool condition_one;
  bool condition_two = false;
  condition_one = true;
  
  cout << condition_one << " " << condition_two << endl;
  
  // booleans are used for condition checks, if we use comparison operators to compare if given statement is true or false, the result can be assigned to bool variable
  
  bool oneIsGreaterThanTwo = ( 1 > 2 ); // as 1 is less than two, the expression (1 > 2) returns false
  bool twoIsGreaterThanOne = ( 2 > 1 ); // return true
  
  // boolean expressions are used in if-else stamements and in loops, where the loop usually runs until a given expression is true 
  
  bool twoEqualsThree = ( 2 == 3 ); // 
  
  cout << "booleans (bool)" << endl << oneIsGreaterThanTwo << " " << twoIsGreaterThanOne << " " << twoEqualsThree << endl;
  
  // the base type for 'characters' in C and C++ is char, but instead we use the string type (and adding #include <string> header) as it is more convenient 
  // on single line, we can declare more than one variable of the same type like this:
  
  string myfirststring, mysecstring;
  
  // then give them some values
  
  myfirststring = "Hello ";
  mysecstring = "world !";
  
  cout << "strings (string)" << endl << myfirststring + mysecstring << endl; // operator + here means concatenation, or merging the two strings into one. there is no however *, / and - operators for strings as for number types
  
  myfirststring = "Bye bye ";
  mysecstring = "for now";
  
  cout << myfirststring+mysecstring << endl;
  
  // Read carefully http://www.cplusplus.com/doc/tutorial/variables/ and http://www.cplusplus.com/doc/tutorial/operators/ 
  
  
  return 0;
}
