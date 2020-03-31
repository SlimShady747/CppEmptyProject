class Base
{
public:
  virtual ~Base() {}
  virtual Base* clone() const = 0;
};

class Derived : public Base
{
public:
  Derived* clone() const override;
};

void foo(Base* original);