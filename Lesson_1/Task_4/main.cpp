#include <iostream>

using namespace std;

int main()
{
    char type;
    int num1;
    cout <<"Which figure do you wanna draw? s / t" <<endl;
    cin >> type;
    switch (type){
        case 's': //square
            cout <<"What size do you wanna draw?" <<endl;
            cin >> num1;
            if (num1 > 0){
                for(int i = 0; i < num1; i++){
                    for(int j = 0; j < num1; j++){
                        cout <<"*";
                    }
                    cout <<endl;
                }
                cout <<"[-] Done" <<endl;
            }else{
                cout <<"Error: size can't be <= 0" <<endl;
                return 0;
            }
            break;
        case 't': // triangle
            cout <<"What size do you wanna draw?" <<endl;
            cin >> num1;
            if(num1 > 0){
                for(int k = 0; k <= num1; k++){
                    for(int h = 0; h < k; h++){
                        cout <<"*";
                    }
                    cout <<endl;
                }
                cout <<"[+] Done" <<endl;
            }else{
                cout <<"Error: size can't be <= 0" <<endl;
                return 0;
            }
            break;
        default:
        cout <<"Error: Unknown figure type" <<endl;
        break;
    }
}
