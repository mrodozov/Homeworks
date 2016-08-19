#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main (){
  
  ifstream ndd; // my input file 
  ofstream my_out; // my uotput file

  // ifstream - input file stream, read with it
  // ofstream - output file stream, write new data with it
  // stringstream - convert string data to other basic types
  
  ndd.open("na.txt");
  
  string line;
  int time_in_secs;
  int counts;
  istringstream buffer;
  
  while ( getline(ndd, line) ){
    //cout << line << endl;
    buffer.str(line);
    buffer >> time_in_secs >> counts;
    cout << time_in_secs << " " << endl ;    
    buffer.clear();
  }
  
  ndd.close();
  
  return 0;
}
