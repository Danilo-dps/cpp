#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int myFunctionValue();
int& myFunctionReference();
int& myDangerousFunction(); // EXEMPLO PERIGOSO (NÃO FAÇA ISSO)

int main(){

    int value = myFunctionValue();         // Chama a função que retorna por valor
    int& reference = myFunctionReference(); // Chama a função que retorna por referência
    int& dangerousRef = myDangerousFunction();  // EXEMPLO PERIGOSO (NÃO FAÇA ISSO)

    cout << "Value returned by myFunctionValue: " << value << endl;
    cout << "Value referred by myFunctionReference: " << reference << endl;
    cout << "Dangerous reference value (undefined behavior): " << dangerousRef << endl;

    return 0; // indica terminação bem-sucedida
}

int myFunctionValue() {
    int x = 10;
    return x; // Retorna uma *cópia* do valor de x.
}

int& myFunctionReference() {
    static int x = 10; // 'static' para que 'x' não seja destruído
    return x;          // Retorna uma *referência* para x.
}

int& myDangerousFunction(){
    int y = 20; // 'y' é uma variável automática (local)
    return y;   // Retorna uma referência para 'y'
} // 'y' é destruído aqui!