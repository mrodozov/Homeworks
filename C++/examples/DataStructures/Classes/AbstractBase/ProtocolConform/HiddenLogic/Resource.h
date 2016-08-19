#ifndef RESOURCE_H
#define RESOURCE_H

#include "BaseObject.h"
#include "Error.h"

class Resource {
  
private:
  
  
  
protected:
  
  virtual void requestData
  
public:
  
  void startedRequestForDataWithDescription(const string & description);  
  void didRecievedData();
  void requestForDataFailedWithError(Error * error);
  
  
  
};

#endif