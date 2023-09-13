#include <iostream>
using namespace std;

class Product {
private:
  int m, n;

public:
  void setData(int x, int y) {
    m = x;
    n = y;
  };

  int getM() { return (m); }
  int getN() { return (n); }
};

class Item {
private:
  int a, b;

public:
  void showData() { cout << "\na=" << a << "b=" << b; }
  Item() {} // default constructor

  Item(Product p) {

    a = p.getM();
    b = p.getN();
  }
};

int main() {
  Item i1;
  Product p1;
  p1.setData(3, 4);
  i1 = p1;
  i1.showData();
}
