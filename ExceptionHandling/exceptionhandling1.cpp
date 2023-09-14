#include <conio.h>
#include <iostream>

using namespace std;

int main() {
  cout << "wlcome";
  try {
    throw 10;
    cout << "\n In Try";
  } catch (int e) {
    cout << "\n Exception no:" << e;
  }
  cout << "\nLast Line";
}
