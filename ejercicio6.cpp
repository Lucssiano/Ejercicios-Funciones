/* 6- Desarrollar la función porcentaje que dados los parámetros a y b devuelva el porcentaje que
representa a sobre b.  */

#include <iostream>

using namespace std;

int porcentaje(int, int);

int main()
{
  int num1, num2;
  cout << "Ingrese un numero ";
  cin >> num1;
  cout << "Ingrese otro numero ";
  cin >> num2;
  cout << "El porcentaje que presenta " << num1 << " sobre " << num2 << " es del " << porcentaje(num1, num2) << "%";
  return 0;
}

int porcentaje(int a, int b)
{
  float porcentaje;
  porcentaje = (float)(a * 100) / b;
  return porcentaje;
}