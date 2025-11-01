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

  int& aRef = a;
  int& bRef = b;
  int& cRef = c;

  int* aPtr = &a;
  int* bPtr = &b;
  int* cPtr = &c;

  cout << endl;
  cout << "Endereço antes das funções: "<<  aPtr <<" "<<  bPtr <<" "<<  cPtr << endl;
  cout << "Valor antes das funções, usando as 'Ref', sem o operador '&': "<<  aRef <<" "<<  bRef <<" "<<  cRef << endl;
  cout << "Valor antes das funções, usando os '*?Ptr', com operador '*': "<< *aPtr <<" "<< *bPtr <<" "<< *cPtr << endl;
  cout << endl;
  
  valor_alocando_memoria(aPtr); 
  valor_modificando_memoria(bPtr);
  referencia(cPtr);  

  valor_alocando_memoria(&aRef); 
  valor_modificando_memoria(&aRef);
  valor_alocando_memoria(&bRef); 
  valor_modificando_memoria(&bRef);
  //referencia(&*cRef); erro de compilação, pois cRef não é um ponteiro, o mesmo ocorreria com &cRef 

  cout << "Não é possível aplicar a função 'referencia' em nenhum deles: "
  <<  aRef <<" "<<  aRef <<" "<< bRef <<" "<< bRef << endl;
  cout << endl;

  cout << "Endereço depois das funções: "<<  aPtr <<" "<<  bPtr <<" "<<  cPtr << endl;
  cout << "Endereço depois das funções: "<<  &a <<" "<<  &b <<" "<<  &c << endl;
  cout << "Valor depois das funções, usando os '*?Ptr', com operador '*': "<< *aPtr <<" "<< *bPtr <<" "<< *cPtr << endl;
  cout << "Valor depois das funções, com efeito das operações nos ponteiros: "<< a <<" "<< b <<" "<< c << endl;
  cout << endl;

  aRef = 4;
  bRef = 5;
  cRef = 6;
  
  cout << "Novos valores via referências, usando as variaveis 'a', 'b' e 'c': " << a <<" "<< b <<" "<< c << endl;
  cout << "Novos valores via referências, usando as 'Ref', sem o operador '&': " << aRef <<" "<< bRef <<" "<< cRef << endl;
  cout << endl;

  return 0;
}
