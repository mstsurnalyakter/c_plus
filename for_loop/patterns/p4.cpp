#include<iostream>

using namespace std;
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E


int main(){

int n = 5;

for(int i = 0; i <n; i++){
        char ch = 'A';
    for(int j = 0; j<n ; j++){
        cout << ch << " ";
        ch++;
    }
    cout << "\n";
}

return 0;
}
