#include <conio.h>
#include <iostream>

class A {
public:
  void f1() {}
};
class B : public A {

public:
  void f1() {} //  function overriding
  void f2() {}
};
void main() {
  A *p, o1;
  B o2;

  p = &o2;

  p->f1();
}