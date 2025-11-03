#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main(){

    int a = 10;
    int *aPtr = &a;

    cout << endl;
    aPtr = new int(1000);
    cout << "É possível alterar 'aPtr' para apontar para outro endereço de memória" << endl;
    cout << "Endereço armazenado no ponteiro 'aPtr': " << aPtr << endl;
    cout << "Valor apontado pelo ponteiro 'aPtr': " << *aPtr << endl;
    cout << endl;

    aPtr++;
    cout << "É possível incrementar o endereço armazenado no ponteiro 'aPtr'" << endl;
    cout << "Endereço armazenado no ponteiro 'aPtr' após o incremento: " << aPtr << endl;
    cout << endl;

    aPtr--;
    cout << "É possível decrementar o endereço armazenado no ponteiro 'aPtr'" << endl;
    cout << "Endereço armazenado no ponteiro 'aPtr' após o incremento: " << aPtr << endl;
    cout << endl;

    // *aPtr = new int(1000); errado: *aPtr = new int(1000);
    // um valor do tipo "int *" não pode ser atribuído para uma entidade do tipo "int"

}