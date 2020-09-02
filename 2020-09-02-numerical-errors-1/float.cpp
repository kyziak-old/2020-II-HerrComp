#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]){

  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  
  float underd = 1.0;
  float overd = 1.0;
  const int N = std::atoi(argv[1]);

  for(int i = 1; i < N; i++){
    overd = overd*2;
    underd = underd/2;
    std::cout << i << "\t" << overd << "\t" << underd << "\n";
  }
  return 0;
}
