#include <string>
#include <iostream>
#include "Containee.h"

using namespace std;


int main (){
  
  Detail * cc = new Detail();
  DetailTwo * ct = new DetailTwo();
  
  Container * cntnr = new Container();
  ContainerTwo * ctnr_two = new ContainerTwo();
  
  cntnr->setDetail(cc);
  cntnr->getDetail()->printType();
  cntnr->setDetail(ct);
  cntnr->getDetail()->printType();
  
  //
  
  ctnr_two->setDetail(ct);
  ctnr_two->extensionMethodInContainer();
  
  return 0;
}