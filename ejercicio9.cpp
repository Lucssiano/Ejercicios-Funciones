/* 9-  Desarrollar una función tal que dada una fecha en formato número de 8 dígitos
(AAAAMMDD), devuelva el día, el mes y el año correspondientes: */

#include <iostream>

using namespace std;

void fechaFormateada(int);

int main()
{
  int fecha;
  cout << "Ingrese una fecha en formato AAAAMMDD ";
  cin >> fecha;
  fechaFormateada(fecha);
  return 0;
}

void fechaFormateada(int fecha)
{
  int año, mes, dia;

  año = fecha / 10000;
  mes = (fecha - (año * 10000)) / 100;
  dia = (fecha - (año * 10000)) - mes * 100;

  cout << "El ano es: " << año << endl;
  cout << "El mes es: " << mes << endl;
  cout << "El dia es: " << dia << endl;
}