#include "Containee.h"
#include <iostream>

void Detail::printType(){
    std::cout << "first generation" << std::endl;
}


void DetailTwo::printType(){
    std::cout << "second generation" << std::endl;
}

void DetailTwo::extensionMethod(){
  std::cout << "i do more cool stuff" << std::endl;
}

void ContainerTwo::extensionMethodInContainer(){
  this->getDetail()->extensionMethod();
}

//

AbstractBaseDetail::AbstractBaseDetail(){};

AbstractBaseContainer::AbstractBaseContainer(){};

AbstractBaseDetail::~AbstractBaseDetail(){};

AbstractBaseContainer::~AbstractBaseContainer(){};

Detail::Detail()
{

}
Detail::~Detail()
{

}

DetailTwo::DetailTwo()
{

}
DetailTwo::~DetailTwo()
{

}
Container::Container()
{

}
Container::~Container()
{

}

ContainerTwo::ContainerTwo(){};
ContainerTwo::~ContainerTwo(){};