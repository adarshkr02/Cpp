#include <iostream>
using namespace std;

class A {
private:
  int a, b;
  int *p;

public:
  A() { // constructor
    a = 0;
    b = 0;
    p = new int;
  }
  A(int x, int y, int z) { // constructor
    a = x;
    b = y;
    p = new int;
    *p = z;
  }
};

int main() { A o1, o2, o3(3, 4, 5); }