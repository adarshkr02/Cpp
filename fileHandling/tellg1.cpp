#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fin;
  char ch;
  int pos;

  fin.open("abc.txt");

  pos = fin.tellg();
  cout << pos;

  fin >> ch;
  pos = fin.tellg();
  cout << pos;

  fin >> ch;
  pos = fin.tellg();
  cout << pos;

  fin >> ch;
  pos = fin.tellg();
  cout << pos;
}
