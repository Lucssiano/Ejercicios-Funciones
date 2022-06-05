/* 8- Desarrollar una función que dados el día, el mes y el año de una fecha correcta, devuelva la
misma en formato de entero de 8 dígitos con el formato AAAAMMDD */

#include <iostream>

using namespace std;

int fechaFormateada(int, int, int);

int main()
{
  int año, mes, dia;
  do
  {
    cout << "Ingrese un ano en formato AAAA ";
    cin >> año;
    cout << "Ingrese un mes en formato MM ";
    cin >> mes;
    cout << "Ingrese un dia en formato DD ";
    cin >> dia;
  } while (año < 1000 || mes < 1 || mes > 12 || dia < 1 || dia > 31);

  cout << fechaFormateada(año, mes, dia);

  return 0;
}

int fechaFormateada(int año, int mes, int dia)
{
  return año * 10000 + mes * 100 + dia;
}