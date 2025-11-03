#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main(){

    int a = 10;
    int& aRef = a; 

    cout << endl;
    cout << "Valor inicial, da variável 'a': " << a << endl;
    cout << "Valor inicial via referência: " << aRef << endl;
    cout << endl;

    aRef = 1000;
    cout << "É possível atribuir novos valor a variável utilizando a sua referência" << endl;
    cout << "Valor após atribuição via referência, da variável 'a': " << a << endl;
    cout << endl;

    aRef += 5;
    cout << "É possível adicinar valor a variável utilizando a sua referência" << endl;
    cout << "Valor após adição via referência, da variável 'a': " << a << endl;
    cout << endl;

    aRef -= 5;
    cout << "É possível subtrair valor da variável utilizando a sua referência" << endl;
    cout << "Valor após a subtração via referência, da variável 'a': " << a << endl;
    cout << endl;

    aRef *= 5;
    cout << "É possível multiplicar o valor da variável utilizando a sua referência" << endl;
    cout << "Valor após a multiplicação via referência, da variável 'a': " << a << endl;
    cout << endl;

    aRef /= 5;
    cout << "É possível dividir os valores das variável utilizando as suas referências" << endl;
    cout << "Valor após a divisão via referência, da variável 'a': " << a <<  endl;
    cout << endl;
    
}
