/* 11- Hacer un programa dados dos número enteros muestre el siguiente menú de opciones:
1. Muestre la suma de los números.
2. Muestre la resta del menor de los números al mayor.
3. Muestre que porcentaje representa el menor de los números sobre el mayor.
4. Muestre el máximo común divisor de ambos números.
5. Muestre el número combinatorio del mayor de los números sobre el menor.
6. Cambiar los números.
Usar las funciones realizadas en los ejercicios anteriores. */

#include <iostream>

using namespace std;

int suma(int, int);
int resta(int, int);
int porcentaje(int, int);
int maximoComunDivisor(int, int);
int factorial(int a);
int combinatorio(int m, int n);

int main()
{
  int n1, n2;
  cout << "Ingrese dos numeros: ";
  cin >> n1 >> n2;

  cout << "La suma de los numeros es: " << suma(n1, n2) << endl;
  cout << "La resta del menor de los numeros al mayor es: " << resta(n1, n2) << endl;
  cout << "El menor de los numeros representa un " << porcentaje(n1, n2) << "%"
       << " sobre el mayor" << endl;
  cout << "El maximo comun divisor de los numeros es: " << maximoComunDivisor(n1, n2) << endl;
  cout << "El numero combinatorio del mayor de los numeros sobre el menor es: " << combinatorio(n1, n2) << endl;
  return 0;
}

int suma(int a, int b)
{
  return a + b;
}

int resta(int a, int b)
{
  if (a > b)
    return a - b;
  else
    return b - a;
}

int porcentaje(int a, int b)
{
  float porcentaje;
  if (a > b)
    porcentaje = (float)(b * 100) / a;
  else
    porcentaje = (float)(a * 100) / b;
  return porcentaje;
}

int maximoComunDivisor(int A, int B)
{
  int resto, mcd;

  resto = A % B;

  if (resto == 0)
  {
    mcd = B;
    return mcd;
  }
  else
  {
    A = B;
    B = resto;
    maximoComunDivisor(A, B);
  }
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

int combinatorio(int a, int b)
{
  int combinatorio;
  if (a > b)
    combinatorio = factorial(a) / (factorial(b) * factorial(a - b));
  else
    combinatorio = factorial(b) / (factorial(a) * factorial(b - a));
  return combinatorio;
}