#include<iostream>

using namespace std;

int main(){
int number = 5;
if (number >=2){
    for(int i = 2; i <= number; i++){
        if (number % i == 0)
        {
            cout << "Not Prime";
        }else{
            cout << "Prime";
            }
        
    }
}
else{
    cout << "Prime";
}


return 0;
}
