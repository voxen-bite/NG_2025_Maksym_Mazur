#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long int num1, num2;
    char todo;
    cout<<"Select operation (+, -, *, /, ^, s): " <<endl;
    cin >> todo;
    if (todo == 's'){
        cout <<"Enter number: " <<endl;
        cin >> num1;
        cout <<sqrt(num1) <<endl; return 0;
    }else
    cout<<"Enter first number: " <<endl;
    cin >> num1;
    cout <<"Enter second number: " <<endl;
    cin >> num2;
    switch (todo) {
        case('-'): cout <<"\033[34m" <<num1-num2 <<"\033[0m" <<endl; break;
        case('+'): cout <<"\033[34m" <<num1+num2 <<"\033[0m" <<endl; break;
        case('*'): cout <<"\033[34m" <<num1*num2 <<"\033[0m" <<endl; break;
        case('/'): cout <<"\033[34m" <<num1/num2 <<"\033[0m" <<endl; break;
        case('^'): cout <<"\033[34m" <<pow(num1, num2) <<"\033[0m" <<endl; break;
    default:
            cout << "\033[31mError: Invalid operation! \n"; return 0;
    }
    cout <<endl <<endl <<"\033[92m[+] Done \033[0m";
}
