#include<iostream>
using namespace std;

int main(){

int n = 4 ;
char value = 'A';

for(int i = 0; i < n; i++){

for(int j = 0; j < i + 1; j++){
cout << value << " ";
value++;
}
cout << "\n";
}

return 0;
}
