#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
  int a=0;
  int b=0;
  int c=0;
  float d=0;
  int x1=0;
  int x2=0;
  
  cout << "a=" << endl;
  cin >> a ;
  cout << "b=" << endl;
  cin >> b;
  cout << "c=" << endl;
  cin >> c;
  
  d=b*b-4*a*c;
  
  if(d>0)
    {
      x1=( -b + sqrt(d)) / 2*a;
      x2=( -b - sqrt(d)) / 2*a;
      
      cout<<"x1="<< x1 <<endl;
      cout<<"x2="<< x2 <<endl;
    }
  if(d==0)
    {
      x1 = -b /2*a;
      x2 = x1;
      cout << "x1=" << x1 << endl;
      cout << "x2=" << x2 << endl;
    }
  
  if(d < 0)
    {
      cout << " nqma reshenie " << endl;
    }

  return 0;
  
}

// Za da kompilirash
// g++ kvadratno.cpp -o kvadratno.o
// Za da izpylnish
// ./kvadratno.o
