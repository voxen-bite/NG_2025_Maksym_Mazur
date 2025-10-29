#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long double num1, num2, result;
    char op;

    cout <<"Enter youre first number \n"; 
    cin >> num1;
    cout <<"Enter youre second number \n";
    cin >> num2;
    cout <<"Enter operation: +, -, *, /, ^, sqrt.\n";
    cin >> op;
    switch (op)
    {
    case (+):
        result = num1 + num2;
        cout <<"Sum: " <<result; 
        break;
    
    default:
        break;
    }
}