#include<iostream>

using namespace std;

int main(){

int a=5, b = 8;

cout << ((a>b) || (b>a)) << "\n";
cout << ((a>b) && (b>a)) << "\n";
cout << !((a>b) && (b>a)) << "\n";
cout  << !((a>b) || (b>a)) << "\n";

return 0;
}
