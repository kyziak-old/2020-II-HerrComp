#include <iostream>

double sum1(int N);
double sum2(int N);
double sum3(int N);

int main(void) {
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    std::cout << sum1(10) << "\n";
    return 0;
}

double sum1(int N){
    double sum = 0.0;
    int sign = -1;
    for (int n = 1; n <= 2*N; n++) {
        sum += sign*1.0*n/(n+1);
        sign *= -1;
    }
    return sum;
}
