/* 4- Dada una serie de números enteros positivos que finalizan con cero, informar:
a) su factorial
b) cuantos múltiplos de 3
c) cuantos múltiplos de 5
d) cuantos múltiplos de 3 y de 5
Utilice las funciones de ejercicios anteriores.  */

#include <iostream>

using namespace std;

int factorial(int a);
int sonMultiplosDe3(int a);
int sonMultiplosDe5(int a);
int sonMultiplosDe3y5(int a);

int main()
{
  int num, cantMul3 = 0, cantMul5 = 0, cantMul3y5 = 0;

  do
  {
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
    if (num != 0)
    {
      cout << "El factorial de " << num << " es " << factorial(num) << endl;
      if (sonMultiplosDe3(num))
        cantMul3++;
      if (sonMultiplosDe5(num))
        cantMul5++;
      if (sonMultiplosDe3y5(num))
        cantMul3y5++;
    }
  } while (num != 0);

  cout << cantMul3 << " numeros son multiplos de 3" << endl;
  cout << cantMul5 << " numeros son multiplos de 5" << endl;
  cout << cantMul3y5 << " numeros son multiplos de 3 y 5" << endl;

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

int sonMultiplosDe3(int a)
{
  return a % 3 == 0;
}

int sonMultiplosDe5(int a)
{
  return a % 5 == 0;
}

int sonMultiplosDe3y5(int a)
{
  return a % 3 == 0 && a % 5 == 0;
}