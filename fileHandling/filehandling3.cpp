#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

void main() {
  ofstream fout;
  fout.open("myfile.dat", ios::out | ios::binary);
}