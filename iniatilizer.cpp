#include <conio.h>
#include <iostream>N
using namespace std;

class Dummy {
private:
  const int x;
  int &y;

public:
  Dummy(int &n) : x(5), y(n){};
};
int main() {
  int m = 6;
  Dummy d1(m);
}
