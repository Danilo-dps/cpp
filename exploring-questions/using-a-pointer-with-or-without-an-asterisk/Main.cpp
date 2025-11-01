#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    int* ptr = &x;
    
    cout << "=== SEM ASTERISCO (trabalhando com endereços) ===" << endl;
    cout << "Endereço em ptr: " << ptr << endl;
    cout << "Endereço de x: " << &x << endl;
    
    // Operações com endereços
    ptr = &y;  // Agora ptr aponta para y
    cout << "Novo endereço em ptr: " << ptr << endl;
    
    cout << "\n=== COM ASTERISCO (trabalhando com valores) ===" << endl;
    cout << "Valor de x: " << x << endl;
    cout << "Valor de y: " << y << endl;
    cout << "Valor via *ptr: " << *ptr << endl;
    
    // Operações com valores
    *ptr = 100;  // Modifica y através do ponteiro
    cout << "Novo valor de y: " << y << endl;
    
    *ptr = *ptr * 2;  // Operação matemática no valor
    cout << "y após multiplicação: " << y << endl;
    
    return 0;
}