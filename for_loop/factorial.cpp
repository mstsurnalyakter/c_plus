#include<iostream>

using namespace std;

int main(){
int n = 10,fact=1;

for(int i = 1; i <=n; i++){
    fact *=i;
}

cout << "fact = " << fact;


return 0;
}