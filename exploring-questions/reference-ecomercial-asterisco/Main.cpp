#include <iostream>
using std::cout;
using std::endl;

int valueParameter(int value);
int& referenceParameter(int& ref);
void pointerParameter(int* ptr);

int main(){
    int a = 10;
    int& aRef = a;
    int* aPtr = &a;

    cout << "Before function calls:" << endl;
    cout << "=================================================================" << endl;

    cout << "Demonstrating values" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value via reference aRef: " << aRef << endl;
    cout << "Value via pointer name with * operator *aPtr: " << *aPtr << endl;
    cout << endl;

    cout << "Demostrating Address" << endl;
    cout << "Using & operator to get addresses together with the variable name" << endl;
    cout << "Address of &a: " << &a << endl;
    cout << "Address via reference &aRef: " << &aRef << endl;
    cout << "Using only the pointer name to get address" << endl;
    cout << "Address via pointer name aPtr: " << aPtr << endl;

    cout << "=================================================================" << endl;
    cout << endl;

    a = valueParameter(a);
    aRef = referenceParameter(aRef);
    pointerParameter(aPtr);

    cout << "After function calls:" << endl;
    cout << "=================================================================" << endl;

    cout << "Demonstrating values" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value via reference aRef: " << aRef << endl;
    cout << "Value via pointer name with * operator *aPtr: " << *aPtr << endl;
    cout << endl;

    cout << "Demostrating Address" << endl;
    cout << "Using & operator to get addresses together with the variable name" << endl;
    cout << "Address of &a: " << &a << endl;
    cout << "Address via reference &aRef: " << &aRef << endl;
    cout << "Using only the pointer name to get address" << endl;
    cout << "Address via pointer name aPtr: " << aPtr << endl;
    
    cout << "=================================================================" << endl;
    cout << endl;

    return 0;
}

int valueParameter(int value){
    return value * 2;
}

int& referenceParameter(int& ref){
    ref = ref * 2;
    return ref;
}

void pointerParameter(int* ptr){
    *ptr = *ptr * 2;
}
