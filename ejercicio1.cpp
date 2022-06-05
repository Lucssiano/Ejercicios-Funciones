/* 1- Desarrollar una función que calcule el máximo común divisor de dos números enteros A, B
con el siguiente algoritmo:
1. Dividir A por B, y calcular el resto (0 < R < B)
2. Si R = 0, el MCD es B, si no seguir en 3.
3. Reemplazar A por B, B por R, y volver al paso 1.  */

#include <iostream>

using namespace std;

int maximoComunDivisor(int, int);

int main()
{
  int A, B;
  cout << "Ingrese dos numeros enteros: ";
  cin >> A >> B;
  cout << maximoComunDivisor(A, B);
  return 0;
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