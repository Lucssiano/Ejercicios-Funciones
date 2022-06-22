/* 10- Desarrollar un procedimiento tal que dada una hora (HHMMSS) y un tiempo también en
formato HHMMSS devuelva la nueva hora que surge de sumar el tiempo a la hora inicial,
considere también si cambió el día */

// Como hacer que cuente las horas 00 | 01

#include <iostream>

using namespace std;

int sumaDeHoras(int, int);

int main()
{
  int hora, tiempo;
  cout << "Ingresar una hora en formato HHMMSS: ";
  cin >> hora;
  cout << "Ingresar un tiempo en formato HHMMSS: ";
  cin >> tiempo;
  cout << sumaDeHoras(hora, tiempo);
  return 0;
}

int sumaDeHoras(int h1, int h2)
{
  int sumaHrs = h1 + h2;
  return sumaHrs;
}