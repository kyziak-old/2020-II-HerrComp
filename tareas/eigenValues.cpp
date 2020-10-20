// Anderson Stib Ibarra Orozco
// Andrés Felipe Bermúdez Mendoza
// Geraldine Gracia Ruiz

#include <Eigen/Dense>
#include <iostream>
#include <chrono>

double eigenCalculator(Eigen::MatrixXf & M);

int main(int argc, char *argv[]) {
  int n = std::atoi(argv[1]);
  int reps = std::atoi(argv[2]);
  Eigen::MatrixXf A;
  //A << 1,2,3,  4,5,6,  7,8,10;
  A = Eigen::MatrixXf::Random(n,n);
  //A << 1,0,0, 0,1,0, 0,0,1;
  double t = 0;
  for(int ii = 0; ii < reps; ii++){
    t += eigenCalculator(A);
  }
  std::cout << t/reps << std::endl;
  return 0; 
}

double eigenCalculator(Eigen::MatrixXf & M){

  auto start = std::chrono::steady_clock::now();

  Eigen::EigenSolver<Eigen::MatrixXf> es(M);
  es.eigenvalues();
  es.eigenvectors();

  auto end = std::chrono::steady_clock::now();
  double time = std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count()*1.0e-9;
  

  return time;
}

