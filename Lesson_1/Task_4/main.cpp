#include <iostream>

using namespace std;

int main()
{
    char type;
    int size;

    cout << "Which figure do you wanna draw? s / t" << endl;
    cin >> type;
    cout << "What size do you wanna draw?" << endl;
    cin >> size;
    while (size <= 0) {
        cout << "Enter correct size number: " <<endl;
        cin >> size;
    }

    switch (type) {
    case 's': // square
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;

    case 't': // triangle
        for (int k = 0; k <= size; k++) {
            for (int h = 0; h < k; h++) {
                cout << "*";
            }
            cout << endl;
        }
        break;

    default:
        cout << "Error: Unknown figure type" << endl;
        break;
    }

    cout << "[+] Done" << endl;

    return 0;
}
