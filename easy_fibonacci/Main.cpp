#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::cout;
using std::string;

int main(){
    int a = 0, b = 1, c = 0, lim;
    cout << "Enter "  << endl;
    cin >> lim;

    if(lim > 0 && lim <= 46){
        cout << "Fibonacci Sequence: " << endl;
        for(int i = 0; i < lim; i++){
            if(i == 0){
                cout << a << " ";
                continue;
            }
            if(i == 1){
                cout << b << " ";
                continue;
            }
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
        cout << endl;
    } else {
        cout << "Please enter a number between 1 and 46." << endl;
    }


    return 0;
}