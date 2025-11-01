#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;
    
    cout << "Valor de x: " << x << endl;
    cout << "Endereço de x: " << &x << endl;
    cout << "Endereço de x apontado por ptr: " << ptr << endl;
    cout << "Valor acessado via ponteiro *ptr: " << *ptr << endl;
    
    // Modificando o valor através do ponteiro
    *ptr = 20;
    cout << "Novo valor de x: " << x << endl;
    
    // Operações com o valor
    *ptr = *ptr + 5;
    cout << "Valor após operação: " << x << endl;
    
    return 0;
}