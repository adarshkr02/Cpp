#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fin;
  fin.open("abc.txt");

  cout << fin.tellg();
  cout << "\n" << (char)fin.get();
  cout << (char)fin.get();
  cout << "\n" << fin.tellg();
  fin.seekg(6);
  cout << "\n" << fin.tellg();
  cout << "\n" << (char)fin.get();
  cout << "\n" << fin.tellg();
  fin.seekg(-2, ios_base::end);
  cout << "\n" << fin.tellg();
  cout << "\n" << (char)fin.tellg();
}
