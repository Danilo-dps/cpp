// Figura 6.20: fig06_20.cpp
// As referências devem ser inicializadas.
#include <iostream>
using std::cout;
using std::endl;
int main()
{
    int x = 3;
    int &y = x; // y referencia (é um alias para) x, uma vez que y referencia x, y não pode referenciar outra variável
    cout << "x = " << x << endl
         << "y = " << y << endl;

    y = 7; // realmente modifica x
    cout << "x = " << x << endl
         << "y = " << y << endl;

    int a = 5;
    //int &y = a; // erro: y já referencia x

    return 0; // indica terminação bem-sucedida
} // fim de main