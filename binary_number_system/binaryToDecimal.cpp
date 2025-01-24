#include <iostream>
using namespace std;

int binaryToDecimal(int n){

    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n % 2;
         n /= 10;
         ans += rem * pow;
         pow *= 2;
    }

    return ans;
}

int main(){
    cout << binaryToDecimal(100) << "\n";

}
