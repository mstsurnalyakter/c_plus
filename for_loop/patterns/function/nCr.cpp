#include <iostream>
using namespace std;

int factorial(int n){
int fact = 1;

for(int i = 1; i <=n; i++){
fact *= i;
}

return fact;
}

int main(){
int nFactor = factorial(8);
int rFactor = factorial(2);
int nMinR = factorial(8-2);
int nCr = nFactor / (rFactor*nMinR);


cout << nCr << "\n";

return 0;
}

