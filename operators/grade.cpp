#include<iostream>

using namespace std;

int main(){
int mark;
cout << "Enter your mark: ";
cin >> mark;

if(mark >= 80){
    cout << "A+";
}else if(mark >= 70){
 cout << "A";
}else if(mark < 70){
cout << "C";
}

return 0;
}
