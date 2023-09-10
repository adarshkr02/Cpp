#include <conio.h>
#include <iostream>

class Person {
public:
  virtual void fun() = 0; // Pure Virtual Function --> (do Nothing function)
  void f1() {}
};

class Student : public Person {
public:
  virtual void fun() {}
};
