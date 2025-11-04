#include <iostream>

using namespace std;

void valor_alocando_memoria(int* p)
{
  p = new int;
  *p = 7;
}
void valor_modificando_memoria(int* p)
{
  *p = 8;
}
void referencia(int*& p)
{
  p = new int;
  *p = 9;
}

int main()
{
  int a  = 1;
  int b  = 2;
  int c  = 3; 

  int* aPtr = &a;
  int* bPtr = &b;
  int* cPtr = &c;

  cout << endl;
  cout << "Endereço antes das funções: "<<  aPtr <<" "<<  bPtr <<" "<<  cPtr << endl;
  cout << "Valor antes das funções, usando os '*?Ptr', com operador '*': "<< *aPtr <<" "<< *bPtr <<" "<< *cPtr << endl;
  cout << endl;
  
  valor_alocando_memoria(aPtr); 
  valor_modificando_memoria(bPtr);
  referencia(cPtr);  

  cout << "Endereço depois das funções: "<<  aPtr <<" "<<  bPtr <<" "<<  cPtr << endl;
  cout << "Endereço depois das funções: "<<  &a <<" "<<  &b <<" "<<  &c << endl;
  cout << "Valor depois das funções, usando os '*?Ptr', com operador '*': "<< *aPtr <<" "<< *bPtr <<" "<< *cPtr << endl;
  cout << "Valor depois das funções, com efeito das operações nos ponteiros: "<< a <<" "<< b <<" "<< c << endl;
  cout << endl;

  return 0;
}
