#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

void randomize(double* R, const int N, double x){
    for (int i=0; i<N; i++){
        srand((unsigned)time(0));
        x = rand()/(double)(RAND_MAX);
        R[i]=x;
    }
}
                 
void calcmv(double* R, const int N, double& m, double& v){
    for (int i=0; i<N; i++)
        m = m + R[i];
    m = m / N;
    
    for (int i=0; i<N; i++)
        v = v + (R[i]-m)*(R[i]-m);
    v = v / N;
}

int main(){
   const int N = 100;
   double x=0, R[N], m=0, v=0;
   double mean, var;
   randomize(R, N, x);
   calcmv(R, N, m, v);
   // Some lines here....

   cout << "Mean = " << m << endl;
   cout << "Variance = " << v << endl;

   return 0;
}
