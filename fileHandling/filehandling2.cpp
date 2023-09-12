#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {

  ifstream fin;
  char ch;
  fin.open("myfile.dat");
  //   fin >> ch;
  ch = fin.get();
  while (!fin.eof()) {
    cout << ch;
    fin >> ch;
  }
  fin.close();
}
