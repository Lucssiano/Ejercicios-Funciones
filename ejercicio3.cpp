/* 3- Desarrollar una función que dados dos números, retorne verdadero si el primero es múltiplo
del segundo, falso en caso contrario. */

#include <iostream>

using namespace std;

int sonMultiplos(int, int);

int main()
{
  int num1, num2;
  cout << "Ingrese un numero ";
  cin >> num1;
  cout << "Ingrese otro numero ";
  cin >> num2;
  if (sonMultiplos(num1, num2))
    cout << "Los numeros son multiplos - VERDADERO";
  else
    cout << "Los numeros no son multiplos - FALSO";
  return 0;
}

int sonMultiplos(int a, int b)
{
  return a % b == 0;
}
