#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
  int a;
  int rezult=1;
  
  cout << "a=";
  cin >> a;
  
  for (int i = 1 ; i <= a ; i++ )
    {
      //rezult = rezult*i;
      rezult *= i;
      
    }
  
  cout<< "rezultat e "<< rezult <<endl;
  return 0;

}
