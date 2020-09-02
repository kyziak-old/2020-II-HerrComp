#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]){

  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  const int N = std::atoi(argv[1]);

  double eps = 1.0;
  double one = 1.0;

  for(int i = 1; i < N; i++){
    eps = eps/2;
    one = 1 + eps;
    std::cout << i
	      << "\t" << one
	      << "\t" << eps << "\n";
  }
  return 0;
}
