#ifndef BASEOBJECT_H
#define BASEOBJECT_H

// mother of all classes lets see if needed

#include <iostream>
#include <string>
#include "BaseMessages.h"

using namespace std;

class BaseCommunications {
  
protected:  
  
public:
  
  virtual void sendMessage(BaseMessages send_msg, BaseCommunications * reciever);
  virtual void recieveMessage(BaseMessages msg, BaseCommunications * sender);
  virtual void respondOnMessageWithCode (BaseMessages received_msg, BaseCommunications * sender);
  // costumize this 
  virtual BaseMessages getResponseFor(BaseMessages recieved) = 0 ;
  virtual void processMessage(BaseMessages received) = 0;
  
};

#endif