#include<iostream>

using namespace std;

int main(){
char ch;
cout << "Enter character: ";
cin >> ch;

if(ch <= 'a' && ch >= 'z'){
    cout << "Uppercase";
}else{
 cout << "Lowercase";
}

return 0;
}
