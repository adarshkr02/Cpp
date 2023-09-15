#include <iostream>
using namespace std;

namespace MySpace {

int a;
int f1();
class A {
public:
  void fun1();
};
} // namespace MySpace

int MySpace::f1() { cout << "hello f1"; }

void MySpace::A::fun1() { cout << "hello Fun1"; }

// same hai.

// using namespace MySpace;
// int main(){
//     a=5;
// }
using namespace MySpace;
int main() {
  a = 5;
  f1();
  A obj;
  obj.fun1();
}
