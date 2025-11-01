#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    long double num1, num2, result;
    char operation;
    cout << "Select operation (+, -, *, /, ^, s): ";
    cin >> operation;
    if (operation == 's') {
        cout << "Enter number: ";
        cin >> num1;
        result = sqrt(num1);
        cout <<result <<"\n";
        return 0;
    }
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    switch (operation) {
    case '+':
        result = num1 + num2;
        cout << result <<" - Sum \n";
        break;
    case '-':
        result = num1 - num2;
        cout << result <<" - Subtraction \n";
        break;
    case '*':
        result = num1 * num2;
        cout << result <<" - Multiplication \n";
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << result <<" - Division \n";
        } else {
            cout << "Error: Division by zero! \n";
            break;
        }
        break;
    case '^':
        result = pow(num1, num2);
        cout << result <<" - Exponentiation \n";
        break;
    default:
        cout << "Error: Invalid operation! \n";
        break;
    }

}
