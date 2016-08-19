/**
 * Simple inheritance
 */

class Base{
    
public:
  
  virtual 
  void justCry();
   // constructor and destructor
  Base();
  ~Base();
};

class Derived : public Base {
  
private:
  
public:
  
  void justCry();
  
  // constructor and destructor
  Derived();
  ~Derived();
};

