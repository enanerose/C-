#include<iostream>
using namespace std;

int main(){
    cout << "Hello World" << endl;
    int n;
    long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n ;

    for(int i = 1; i < n + 1; i++){
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial ;
    
return 0;
}

