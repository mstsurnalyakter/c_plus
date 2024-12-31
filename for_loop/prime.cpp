#include<iostream>

using namespace std;

int main(){

bool isPrime;

int number = 6;
if (number >=2){
    for(int i = 2; i <= number; i++){
        if (number % i == 0)
        {
          isPrime = false;
          break;
        }else{
           isPrime= true;
            }

    }
}
else{
    isPrime = false;
}

 cout << (isPrime ? "Prime":"Not Prime") << "\n";

return 0;
}
