#include <iostream>
#include <memory>
#include "includePlaceholder.h"

// class Derived : public Base
// {
// public:clone() const override
//   {
//     return new Derived(*this);
//   }
// };

Derived* Derived::clone() const
  {
	  std::cout<<"Returning new ofbject..."<<std::endl;
    return new Derived(*this);
  }
void foo(Base* original)
{
  std::unique_ptr<Base> copy{original->clone()};
}