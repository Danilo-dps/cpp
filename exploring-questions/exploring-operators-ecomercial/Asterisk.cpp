#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main(){

    int a = 10;
    int *aPtr = &a;
    
    cout << endl;
    cout << "Valor inicial da variável 'a': " << a << endl;
    cout << "Endereço de memória da variável 'a': " << &a << endl;
    cout << "Valor apontado pelo ponteiro '*aPtr': " << *aPtr << endl;
    cout << "Endereço de memória da variável 'a', apontado pelo ponteiro 'aPtr': " << aPtr << endl;
    cout << endl;

    *aPtr += 250;
    cout << "É possível adicionar valor a variável 'a' utilizando o ponteiro '*aPtr'" << endl;
    cout << "Valor após a adição via ponteiro, da variável 'a': " << a << endl;
    cout << "Valor apontado pelo ponteiro '*aPtr': " << *aPtr << endl;
    cout << endl;

    *aPtr -= 100;
    cout << "É possível subtrair valor da variável 'a' utilizando o ponteiro 'aPtr'" << endl;
    cout << "Valor após a subtração via ponteiro, da variável 'a': " << a << endl;
    cout << "Valor apontado pelo ponteiro '*aPtr': " << *aPtr << endl;
    cout << endl;   

    *aPtr *= 2;
    cout << "É possível multiplicar o valor da variável 'a' utilizando o ponteiro 'aPtr'" << endl;
    cout << "Valor após a multiplicação via ponteiro, da variável 'a': " << a << endl;
    cout << "Valor apontado pelo ponteiro '*aPtr': " << *aPtr << endl;
    cout << endl;           

    *aPtr /= 5;
    cout << "É possível dividir o valor da variável 'a' utilizando o ponteiro 'aPtr'" << endl;
    cout << "Valor após a divisão via ponteiro, da variável 'a': " << a << endl;
    cout << "Valor apontado pelo ponteiro '*aPtr': " << *aPtr << endl;
    cout << endl; 
    
    *aPtr++;
    cout << "É possível incrementar o valor apontado pelo ponteiro 'aPtr'" << endl;
    cout << "Valor apontado pelo ponteiro 'aPtr' após o incremento: " << *aPtr << endl;
    cout << endl;

    *aPtr--;
    cout << "É possível decrementar o valor apontado pelo ponteiro 'aPtr'" << endl;
    cout << "Valor apontado pelo ponteiro 'aPtr' após o incremento: " << *aPtr << endl;
    cout << endl;

}