#include <conio.h>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ofstream fout;

  fout.open("abc.txt", ios::ate | ios::app);
  cout << fout.tellp();
  cout << "ABCDEFG";
  cout << fout.tellp();
  fout.seekp(2, ios_base::beg);
  cout << fout.tellp();
  fout.close();
}