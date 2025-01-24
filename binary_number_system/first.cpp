#include <iostream>
using namespace std;

int decimalToBinary(int decimalNum){
    int ans = 0, pow = 1;
    while(decimalNum > 0){
        int rem = decimalNum%2;
        decimalNum /=2;
        ans += (rem*pow);
        pow *=10;
    }
    return ans;
}

int main(){
    int decimalNum = 50;
    cout << decimalToBinary(decimalNum) << endl;

    return 0;
}
// Output: 110010