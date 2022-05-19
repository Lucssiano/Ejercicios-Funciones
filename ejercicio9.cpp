/* 9-  Desarrollar una función tal que dada una fecha en formato número de 8 dígitos
(AAAAMMDD), devuelva el día, el mes y el año correspondientes: */

#include <iostream>

using namespace std;

int fechaFormateada(int);

int main()
{
  int fecha;
  cout << "Ingrese una fecha en formato AAAAMMDD ";
  cin >> fecha;
  cout << fechaFormateada(fecha);
  return 0;
}

int fechaFormateada(int fecha)
{
}