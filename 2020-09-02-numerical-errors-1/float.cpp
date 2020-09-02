#include <iostream>

int main(void){
  float underd = 1.0;
  float overd = 1.0;
  const int N = 170;

  for(int i = 1; i < N; i++){
    overd = overd*2;
    underd = underd/2;
    std::cout << i << "\t" << overd << "\t" << underd << "\n";
  }
  return 0;
}
