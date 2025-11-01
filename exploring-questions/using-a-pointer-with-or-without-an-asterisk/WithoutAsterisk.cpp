#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;  // ptr armazena o endereço de x
    
    cout << "Endereço armazenado em ptr: " << ptr << endl;
    cout << "Endereço de x: " << &x << endl;
    
    // Operações com o ponteiro (sem asterisco)
    ptr++;  // Incrementa o endereço (avança o endereço para o próximo inteiro na memória)
    cout << "Novo endereço após ptr++: " << ptr << endl;
    
    return 0;
}