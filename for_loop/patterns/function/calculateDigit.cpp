#include <iostream>
using namespace std;

int calculateLastDigit(int n){
int sum = 0;
while(n > 0){
int lastDigit = n % 10;
n = n / 10;
sum += lastDigit;
}

return sum;

}


int main(){

cout << calculateLastDigit(343) << "\n";

return 0;
}
