#include "BaseCommunications.h"

void BaseCommunications::respondOnMessageWithCode ( BaseMessages received_msg, BaseCommunications* sender ) { 
  BaseMessages response = this->getResponseFor(received_msg);
  if ( response != BaseMessages::kDoNotReturn ) this->sendMessage(response, sender);  
}

void BaseCommunications::sendMessage ( BaseMessages send_msg, BaseCommunications* reciever ) {
  reciever->recieveMessage(send_msg, this);
}

void BaseCommunications::recieveMessage ( BaseMessages msg, BaseCommunications* sender ) {
  
  this->processMessage(msg);
  this->respondOnMessageWithCode(msg, sender);
  
}

