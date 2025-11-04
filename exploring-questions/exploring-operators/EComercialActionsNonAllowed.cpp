#include <iostream>
using namespace std;
using std::cout;
using std::endl;

int main(){

    int a = 10;
    int& aRef = a; 
    
    //int& bRef; // errado: é necessário inicializar uma referência no momento da sua declaração

    //int aRef = &a; errado: int& aRef = &a; 
    //um valor de tipo "int *" não pode ser utilizado para inicializar uma entidade do tipo "int"

    //aRef = new int(5000); um valor do tipo "int *" não pode ser atribuído para uma entidade do tipo "int"
    // Em outras palavras, referências não podem ser "rebinded(religada)" para referenciar outros objetos.
    
}
