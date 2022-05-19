/* 8- Desarrollar una función que dados el día, el mes y el año de una fecha correcta, devuelva la
misma en formato de entero de 8 dígitos con el formato AAAAMMDD */

#include <iostream>

using namespace std;

int fechaFormateada(int, int, int);

int main()
{
  int año, mes, dia;
  cout << "Ingrese un año en formato AAAA ";
  cin >> año;
  cout << "Ingrese un mes en formato MM ";
  cin >> mes;
  cout << "Ingrese un dia en formato DD ";
  cin >> dia;
  cout << fechaFormateada(año, mes, dia);
  return 0;
}

int fechaFormateada(int año, int mes, int dia)
{
}