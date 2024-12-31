#include<iostream>

using namespace std;

int main(){
int n = 10,sum=0;

for(int i = 1; i <=n; i++){
    if(i%3 == 0){
        sum += i;
    }
}

cout << "sum = " << sum;


return 0;
}