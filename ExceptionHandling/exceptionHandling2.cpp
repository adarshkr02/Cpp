#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int i = 3;
  try {
    if (i == 1)
      throw 1;
    if (i == 2)
      throw "hello";
    if (i == 3)
      throw 3.5;
  } catch (...) {
    cout << "Exception no:";
  }
}
