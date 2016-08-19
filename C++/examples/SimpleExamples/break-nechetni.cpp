#include <iostream>
#include <string>
#include <math.h>

using namespace std;


// Programata preskacha nechetnite chisla
// Pokazva nyakolko osnovni neshta
// 1. Operator modulo ili
//       % 
// Operatora dava celochisleniq (int) ostatuk ot deleneto na edno chislo s drugo
// 2. Operator -- .
// 3. Operator continue . Kogato se izpylni operatora "continue" vsichko v zonata na vidimost v koqto e definiran (scope) se propuska, v sluchaq do zatvarqshtata skoba "}" .
// Izpolzva se da se preskachat instrukcii, ako e izpylneno  dadeno uslovie, koeto garantira che sledvashtite instrukcii v bloka (mejdu dve {} skobi)  ne biva ili e bezsmisleno da se izpylnqvat.
// Izpolzva se nay-chesto v loop-ove. v primera kogato chisloto n se deli na 2 bez ostatuk instrukciite do "kray" se preskachat i se zapochva ot reda "nachalo"
// 4. Operator break. Operatora "break" pri izpylnenie izvejda programata izvun tekushtiq loop (sled zatvarqshtata } skoba) - spira loop-a i programata prodyljava sled nego
// Izpolzva se da spre loop pri dostigane na opredeleno uslovie, vuv "switch" statement da spre pri popadane na podhodqshtata stoynost. V primera break se izpylnqva ako(kogato) n ima stoynost 3
// 5. Ednoredovi "if" usloviq . Syntax-isa na "if" uslovieto iziskwa () skobi za uslovieto i {} za "tqloto" koeto se izpylnqva, ako uslovieto e vqrno
// Ako instrukciite za tqloto obache sa kratki, vmesto v skobi {} mogat da se slojat vednaga sled kraq na skobite za uslovie ( v primera sled "if ( n % 2==0)" i sled "if(n==3)" )



int main()
{ 
  for (int n=10; n>0; n--)
    
    {
      // nachalo 
      if( n % 2 == 0 )  continue;
      cout << n <<endl;
      if(n==3)  break;
      // kray
    }

  return 0;

}

// Za da kompilirash: 
// g++ break-nechetni.cpp -o break_nechetni.o
// Za da izpylnish 
// ./break_nechetni
