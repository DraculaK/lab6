#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;


int main(){
  
  const double lambda = -0.5;
  const int N = 100;
  double t_hl = -log(2.0)/lambda;
  double dt = 5*t_hl/N;
  double yfwd = 1.0;
  double ybwd = 1.0;
  double y = 1.0;
  
  cout << 0.0*dt << "\t" << y << "\t" << "\t" << yfwd << "\t" << ybwd << endl;
  
  for(int i=0; i<N; i++){
  y = exp((i+1)*lambda*dt); 
  yfwd = yfwd + dt*lambda*yfwd;
  ybwd = ybwd/(1-dt*lambda);
  
  cout << (i+1)*dt << "\t" << y << "\t" << yfwd << "\t" << ybwd << endl;
  }
  
  
  
 return 0;  
}

