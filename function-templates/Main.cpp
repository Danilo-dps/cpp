// Figura 6.27: fig06_27.cpp
// Programa de teste do template de função maximum.
#include <iostream>
#include "maximum.h"
using std::cin;
using std::cout;
using std::endl;

 // inclui a definição do template de função maximum
int main()
{
    // demonstra maximum com valores int
    int int1, int2, int3;
    cout << "Input three integer values : ";
    cin >> int1 >> int2 >> int3;
    // invoca a versão int de maximum
    cout << "The maximum integer value is : "
         << maximum(int1, int2, int3);
    // demonstra maximum com valores double
    double double1, double2, double3;
    cout << "\n\nInput three double values : ";
    cin >> double1 >> double2 >> double3;
    // invoca a versão double de maximum
    cout << "The maximum double value is : "
         << maximum(double1, double2, double3);
    // demonstra maximum com valores char
    char char1, char2, char3;
    cout << "\n\nInput three characters : ";
    cin >> char1 >> char2 >> char3;
    // invoca versão char de maximum
    cout << "The maximum character value is : "
         << maximum(char1, char2, char3)
         << endl;
    return 0; // indica terminação bem-sucedida
} // fim de main