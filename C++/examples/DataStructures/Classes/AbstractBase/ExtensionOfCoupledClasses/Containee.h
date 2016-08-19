

class AbstractBaseDetail {
  
public:
  virtual void printType()=0;
  AbstractBaseDetail();
  virtual ~AbstractBaseDetail();
};


class AbstractBaseContainer {
  
protected:
  
  AbstractBaseDetail * containeeInstance;
  
public:
  virtual void setDetail(AbstractBaseDetail * cc)=0;
  virtual AbstractBaseDetail * getDetail()=0;
  AbstractBaseContainer();
  virtual ~AbstractBaseContainer();
};

////

class Detail : public AbstractBaseDetail {
  
public:
  virtual void printType();
  Detail();
  ~Detail();
  
};

class DetailTwo : public Detail{
  
public:
  
  virtual void printType();
  void extensionMethod ();
  DetailTwo();
  ~DetailTwo();
  
};

class Container : public AbstractBaseContainer {
  
public:
  
  virtual void setDetail(AbstractBaseDetail * c){this->containeeInstance =  c;}
  virtual Detail * getDetail() {return dynamic_cast<Detail*>( this->containeeInstance);}
  Container();
  ~Container();
};


class ContainerTwo : public Container{
  
public:  
  
  virtual DetailTwo * getDetail (){ return dynamic_cast<DetailTwo*>( this->containeeInstance); }
  
  void extensionMethodInContainer ();
  
  ContainerTwo();
  ~ContainerTwo();
  
};


