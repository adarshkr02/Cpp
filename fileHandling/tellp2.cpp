#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream fout;
  char ch;
  fout.open("abc.txt", ios::app);

  int pos;
  pos = fout.tellp();
  cout << pos;

  fout << "mysirg";
  pos = fout.tellp();
  cout << pos;
  fout.close();
}
