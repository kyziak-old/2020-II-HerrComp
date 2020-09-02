#include <iostream>
#include <cstdlib>

typedef double REAL;

REAL suma(REAL x, int Nmax);

int main(int argc, char *argv[]){

  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  const REAL xval = std::stof(argv[1]);
  const int N = std::atoi(argv[2]);

  std::cout << suma(xval, N) << "\n";
  
  return 0;
}

REAL suma(REAL x, int Nmax){

  REAL suma = 1.0;
  REAL term = 1.0;

  for(int i = 2; i < Nmax; i++){
    term = term*(-x)/(i + 1);
    suma = suma + term;
  }

  return suma;
}
