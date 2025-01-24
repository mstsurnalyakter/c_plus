#include <iostream>
using namespace std;

int oneToTen(int n){
    int ans = 0 , pow = 1;
    while( n > 0){
        int rem = n % 2;
        n /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int main(){

    int n = 10;
    for(int i = 1; i <= n; i++){
        cout << oneToTen(i) << "\n";
    }
    return 0;
}