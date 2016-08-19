#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int matrixArray[3][3];


int main(){
  
  
  for (int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j++){
      
      cout << "Vavedete element " << i+1 << " , " << j+1 << endl;
      cin >> matrixArray[i][j];
      
    }
  }
  
  for (int k = 0 ; k < 3 ; k++){
    for (int l = 0 ; l < 3 ; l++){
      cout << matrixArray[k][l] << " ";
    }
    cout << "\n";
  }
  
  
  
  return 0;
}
