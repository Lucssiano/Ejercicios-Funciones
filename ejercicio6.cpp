/* 6- Desarrollar la función porcentaje que dados los parámetros a y b devuelva el porcentaje que
representa a sobre b.  */

#include <iostream>

using namespace std;

void porcentaje(int, int);

int main()
{
  int num1, num2;
  cout << "Ingrese un numero ";
  cin >> num1;
  cout << "Ingrese otro numero ";
  cin >> num2;
  porcentaje(num1, num2);
  return 0;
}

void porcentaje(int a, int b)
{
  float porcentaje;
  porcentaje = (float)(a * 100) / b;
  cout << "El porcentaje que presenta " << a << " sobre " << b << " es del " << porcentaje << "%";
}