#include<iostream>

using namespace std;

int main(){


cout << "While Loop : ";
int sum = 0;

for(int i= 1; i <=10; i++){
    if(i%2 != 0){
        sum +=i;
    }
}

cout << "Sum = " << sum;

return 0;
}
