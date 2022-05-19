// 2- Desarrollar una función tal que dado un número entero positivo calcule y retorne su factorial.

#include <iostream>

using namespace std;

int factorial(int);

int main()
{
  int num;
  cout << "Ingrese un numero entero positivo: ";
  cin >> num;
  cout << "El factorial de " << num << " es " << factorial(num);
  return 0;
}

int factorial(int a)
{
  unsigned factorial = 1;

  for (int i = 1; i <= a; i++)
  {
    factorial *= i;
  }

  return factorial;
}