#include <iostream>

int main(void){
  double underd = 1.0;
  double overd = 1.0;
  const int N = 1000;

  for(int i = 1; i < N; i++){
    overd = overd*2;
    underd = underd/2;
    std::cout << i << "\t" << overd << "\t" << underd << "\n";
  }
  return 0;
}
