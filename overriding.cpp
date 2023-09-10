#include <conio.h>
#include <iostream>

class A {
public:
  void f1() {}
  void f2() {}
};

class B : public A {
  void f1() {}
  void f2(int x) {}
};

void main() {
  B obj;
  obj.f1();
}