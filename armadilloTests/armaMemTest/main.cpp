#include <iostream>

#include "armadillo"

using namespace arma;
using namespace std;


int main(int argc, char** argv)
{
  mat A = randu<mat>(1e4,1e4);
  //cout << A << endl;
  system("PAUSE");
  return 0;
}
